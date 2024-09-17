#include <iostream>



class Observer
{
    public:
        virtual void update(float temp, float humidity) = 0;
};

class Subject 
{
    virtual ~Subject() {}
    virtual void subscribe(Observer* observer) = 0;
    virtual void unSubscribe(Observer* observer) = 0;
    virtual void notify() = 0;
};



int main()
{
    return 0;
}
