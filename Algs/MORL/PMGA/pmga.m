%% Init
clc
clear all
close all
reset(symengine)

dim = 2;

% mdp = Dam(dim); bfs = @dam_basis_rbf; mu0 = [50, -50, 0, 0, 50]; sigma0 = 150^2;
% [theta, rho, t, D_t_theta, D_rho_theta] = feval(['params_' lower(class(mdp))], [], mdp);
% policy = GaussianLinearDiag(bfs, mdp.daction, mu0, sigma0);

mdp = LQR(dim); bfs = @(varargin)basis_poly(1,dim,0,varargin{:}); mu0 = -0.5*eye(dim); sigma0 = eye(dim);
[theta, rho, t, D_t_theta, D_rho_theta] = feval(['params_' lower(class(mdp))], 'P1', mdp);
policy = GaussianLinearFixedvarDiagmean(bfs, mdp.daction, mu0, sigma0);

utopia = mdp.utopia;
antiutopia = mdp.antiutopia;
true_front = mdp.truefront;
dim_J = mdp.dreward;

ind_type = {'mix2', [1,1]}; % MIX2: beta1 * I_AU / I_U - beta2
% ind_type = {'mix3', 1}; % MIX3: I_AU * (1 - lambda * I_U)
[ind_handle, ind_d_handle] = parse_indicator_handle(ind_type{1},ind_type{2},utopia,antiutopia);

dim_rho = length(rho);
dim_t = length(t);
dim_theta = length(theta);

for j = 1 : dim_rho
    D_r_Dtheta(:,:,j) = diff(D_t_theta,rho(j));
end
D_r_Dtheta = reshape(D_r_Dtheta,dim_theta*dim_t,dim_rho);


%% Learning settings
tolerance = 0.00001;
lrate = 2;

episodes = 50;
steps = 50;
n_points = 1; % #points t used to estimate the integral
lo = zeros(dim_t,1);
hi = ones(dim_t,1);
[~, volume] = simplex(lo,hi);

MAX_ITER = 1000;

% rho_learned = -20*ones(1,dim_rho);
rho_learned = rand(1, dim_rho);
rho_learned(end) = 50;

rho_history = [];
L_history = [];
hv_history = [];
loss_history = [];
t_history = {};
iter = 1;


%% Learning
while iter < MAX_ITER
    
    rho_history = [rho_history; rho_learned];
    
    theta_iter = subs(theta, rho, rho_learned);
    D_t_theta_iter = subs(D_t_theta, rho, rho_learned);
    D_rho_theta_iter = subs(D_rho_theta, rho, rho_learned);
    D_r_Dtheta_iter = subs(D_r_Dtheta, rho, rho_learned);
    
    % Monte-Carlo sampling, estimate of the integral
    t_points = unifrnds(lo, hi, n_points)';
    t_history{iter} = t_points;

    [L_eval, D_L_eval] = executeTPoint(mdp, policy, episodes, steps, t_points, ...
        theta_iter, D_r_Dtheta_iter, D_t_theta_iter, D_rho_theta_iter, ...
        t, ind_handle, ind_d_handle);

    L_eval = L_eval * volume;
    D_L_eval = D_L_eval * volume;
    
    % Update
    fprintf('Iter: %d, L: %.4f, Norm: %.3f\n', iter, L_eval, norm(D_L_eval));
    L_history = [L_history; L_eval];
    
    lambda = sqrt(D_L_eval * eye(dim_rho) * D_L_eval' / (4 * lrate));
    lambda = max(lambda,1e-8); % to avoid numerical problems
    stepsize = 1 / (2 * lambda);
    rho_learned = rho_learned + D_L_eval * stepsize;
    
    iter = iter + 1;

end


%% Evaluation
if dim_J == 2
    hv_fun = @(varargin)hypervolume2d(varargin{:},antiutopia,utopia);
else
    hv_fun = @(varargin)mexHypervolume(varargin{:},antiutopia,utopia,1e6);
end

n_points_eval = 1000;
t_points_eval = linspacesim(lo, hi, n_points_eval);
t_arg = mat2cell(t_points_eval', size(t_points_eval,2), ones(1,dim_t));
episodes_eval = 1000;
steps_eval = 100;
front_manual = mdp.truefront;
theta_f = matlabFunction(theta);

close all
figure
for j = 1 : 10 : size(rho_history,1)
    
    clf, hold all

    rho_arg = num2cell(rho_history(j,:));
    theta_j = reshape(theta_f(rho_arg{:},t_arg{:}), [size(t_points_eval,2), dim_theta]);
    pol_iter = repmat(policy,1,size(t_points_eval,2));
    for i = 1 : size(t_points_eval,2)
        pol_iter(i) = policy.update(theta_j(i,:));
    end
    
    front_learned = evaluate_policies(mdp, episodes_eval, steps_eval, pol_iter)';
    front_learned = sortrows(front_learned);
%     front_learned = pareto(front_learned);
    if dim_J == 3
        plot3(front_manual(:,1),front_manual(:,2),front_manual(:,3),'ob')
        plot3(front_learned(:,1),front_learned(:,2),front_learned(:,3),'+r')
        grid on, view(70,24)
    else
        plot(front_manual(:,1),front_manual(:,2),'b')
        plot(front_learned(:,1),front_learned(:,2),'r')
    end
    
    front_learned = pareto(front_learned);
    hv(j) = hv_fun(front_learned);
    l(j) = eval_loss(front_learned,mdp);
    fprintf('%d ) Hyperv: %.4f, Loss: %.4f\n',j,hv(j),l(j));

    drawnow limitrate
    
end
