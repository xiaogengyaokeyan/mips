clear, clc, close all

dimX = 3; dimY = 2;
f = @(x) [sin(0.5*x(1,:).^2 - 0.25*x(2,:).^2 + 3) .* cos(2*x(1,:)+1 - exp(x(2,:)));
    (x(1,:) + 2*x(2,:) - 7).^2 + (2*x(1,:) + x(2,:) - 5).^2 + x(3,:)];

dimX = 2; dimY = 1;
f = @(x) -0.1*(x(1,:)-x(2,:)).^2 - (x(1,:)+x(2,:))/sqrt(2) + 4;

nn = Network([ ...
    Lin(dimX,15) ...
    Bias(15) ...
    Sig() ...
    Lin(15,dimY) ...
    Bias(dimY) ...
    ]);

optim = RMSprop(length(nn.W));
optim = ADAM(length(nn.W));
optim.alpha = 0.00025;

t = 1;

%% Prepare dataset
rng(3)
N = 100;
batchsize = 32;
X = myunifrnd(-100*ones(dimX,1), 100*ones(dimX,1), N);
X = normalize_data(X);
% X = rand(dimX,N);
T = f(X); % Target

%% Learn
while true
    
    mb = randperm(N,batchsize);
    
    Y = nn.forwardfull(X(:,mb)')';
    E = T(:,mb) - Y;
    dL = - E / batchsize;
    dW = nn.backward(dL');
%     nn.update(optim.step(nn.W, dW));
    nn.update(nn.W - 0.01*dW);
    t = t + 1;
    
    Y_eval = nn.forward(X')';
    E_eval = mean((T - Y_eval).^2, 2); % ./ mean( Y.^2, 2 );
    L_eval = mean(E_eval);
    updateplot('Loss', t, L_eval, 1)
%     updateplot('Network Parameters', t, nn.W)
%     updateplot('Gradient Norm', t, norm(dW), 1)
    if t == 2, autolayout, end
    
end
