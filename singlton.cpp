#include <iostream>


class Singleton
{
    private:
        static Singleton* SingletonInst;
        Singleton(){}

        int setting1;          // feel free to create and modify any setting
        std::string setting2;  // those are just dummy settings

    public:
        static Singleton* getInstance() 
        {
            if (SingletonInst == nullptr) 
            {
                SingletonInst = new Singleton();
            }
        return SingletonInst;
        }

        // the getters and setters of the class settings
        int getsetting1()
        {
            return setting1;
        }

        std::string getsetting2()
        {
            return setting2;
        }
        
        void setsetting1(int v)
        {
            setting1 = v;
        }

        void setsetting2(std::string s)
        {
            setting2 = s;
        }


};





Singleton* Singleton::SingletonInst = nullptr; // very important initialization
                                              // must be done only once, preferably where the code is used (.cpp)






int main()
{
    return 0;
}