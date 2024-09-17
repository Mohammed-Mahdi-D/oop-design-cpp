#include <iostream>
#include <memory>



class StateInterface
{
    public:
        virtual void doSomething() = 0;

};


class StateA : public StateInterface
{
    public:
        void doSomething() override
        {
            std::cout << "doing something in A state" << "\n";
        }
};


class StateB : public StateInterface
{
    public:
        void doSomething() override
        {
            std::cout << "doing something in B state" << "\n";
        }
};


class StateC : public StateInterface
{
    public:
        void doSomething() override
        {
            std::cout << "doing something in C state" << "\n";
        }
};


class Context
{
    private:
        std::shared_ptr<StateInterface> state;
        void changeState(std::shared_ptr<StateInterface> newState)
        {
            state = std::move(newState);
        }
        
    public:

        void transitionTo(std::shared_ptr<StateInterface> newState) {
            // transition logic here
            if(newState)
            {
            changeState(std::move(newState));
            }
            else 
            {
                std::cout << "Invalid new state, state not changed!\n";
            }
        }


        void doSomething() 
        {
            state->doSomething();
        }
};


int main()
{
    // set up the states
    
    // auto stateA = std::make_shared<StateA>();
    // auto stateB = std::make_shared<StateB>();
    // auto stateC = std::make_shared<StateC>();

    // manage the context state and call doSomething() directly regardless of the current state

    // Context context;
    // context.transitionTo(stateA);
    // context.doSomething();

    // context.transitionTo(stateB);
    // context.doSomething();

    // context.transitionTo(stateC);
    // context.doSomething();

    return 0;
}