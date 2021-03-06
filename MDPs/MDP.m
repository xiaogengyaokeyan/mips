classdef (Abstract) MDP < handle
% MDP Abstract class that defines the basic properties and methods of a 
% problem (number of states and actions, simulation and plotting, ...).
    
    properties (GetAccess = 'public', SetAccess = 'protected')
        realtimeplot = 0; % Flag to plot the environment at each timestep
        handleEnv         % Handle of the figure used for plotting
        handleAgent       % Handle of plotting elements inside handleEnv
    end
    
    properties (Abstract)
        dstate       % Size of the state space
        daction      % Size of the action space
        dreward      % Number of rewards
        isAveraged   % Is the reward averaged?
        gamma        % Discount factor

        % Upper/lower bounds
        stateLB
        stateUB
        rewardLB
        rewardUB
        actionLB
        actionUB
    end
    
    methods(Hidden = true)
        initplot(obj); % Initializes the environment and the agent figure handles.
        updateplot(obj, state); % Updates the figure handles.
    end
        
    methods
        function state = initstate(obj,n)
        % Return N initial states.
            if nargin == 1, n = 1; end
            state = obj.init(n);
            if obj.realtimeplot, obj.showplot; obj.updateplot(state); end
        end
            
        function [nextstate, reward, absorb] = simulator(obj, state, action)
        % Defines the state transition function.
            action = obj.parse(action);
            nextstate = obj.transition(state,action);
            reward = obj.reward(state,action,nextstate);
            absorb = obj.isterminal(nextstate);
            if obj.realtimeplot, obj.updateplot(nextstate); end
        end
        
        function showplot(obj)
        % Initializes the plotting procedure.
            obj.realtimeplot = 1;
            if isempty(obj.handleEnv), obj.initplot(); end
            if ~isvalid(obj.handleEnv), obj.initplot(); end
        end
        
        function closeplot(obj)
        % Closes the plots and stops the plotting procedure.
            obj.realtimeplot = 0;
            try close(obj.handleEnv), catch, end
            obj.handleEnv = [];
            obj.handleAgent = [];
        end
        
        function plotepisode(obj, episode, pausetime)
        % Plots the state of the MDP during an episode.
            if nargin == 2, pausetime = 0.001; end
            try close(obj.handleEnv), catch, end
            obj.initplot();
            obj.updateplot(episode.s(:,1));
            for i = 1 : size(episode.nexts,2)
                pause(pausetime)
                obj.updateplot(episode.nexts(:,i))
                title(strrep(mat2str(episode.r(:,i)'), ' ', ', '))
            end
        end
    end
    
end