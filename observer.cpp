#include <iostream>
#include <vector>
#include <algorithm>


class Observer
{
    public:
        virtual void update(float temp, float humidity) = 0; // change those as needded
};

class Subject 
{
    public:
        virtual ~Subject() {}
        virtual void subscribe(Observer* observer) = 0;
        virtual void unSubscribe(Observer* observer) = 0;
        virtual void notify() = 0;
};


class SubjectChild : public Subject
{
    public: 
        std::vector<Observer*> observers;

        void subscribe(Observer* observer) override
        {
            observers.push_back(observer);
        }

        void unSubscribe(Observer* observer) override
        {
            auto it = std::remove(observers.begin(), observers.end(), observer);
            if (it != observers.end()) {
                observers.erase(it, observers.end());
            }
        }

        void notify() override
        {
            for(auto& observer : observers)
            {
                observer->update(22.4, 75.0); // change the values as needded
            }
        }


};


class ObserverChild : public Observer
{
    void update(float temp, float humidity) override
    {
        std::cout << temp << " " << humidity << "\n";
    }
};



int main()
{

    // SubjectChild subject;
    // ObserverChild observer;

    // subject.subscribe(&observer);
    // subject.notify();
    // subject.unsubscribe(&observer);
    return 0;
}
