#include <iostream>



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



int main()
{

    return 0;
}