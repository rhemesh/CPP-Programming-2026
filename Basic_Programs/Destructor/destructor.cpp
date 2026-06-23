#include<iostream>

using namespace std;

class test
{
    public:
    test()
    {
        cout<<"Contructor"<<endl;
    }
    ~test()
    {
        cout<<"Destructor"<<endl;
    }
};

int main()
{
    test t,t1,t2;

    return 0;
}

/*

Summary:
Destructor:
It is a special member function of the class,they are used to destroy the objects
The name of destroyer will be the same of class name.
destroyer doesn't have an return type
Destroyer is automatically called when an object of the class is going out of scope or if they are destroyed
If there is no destructor also the objects created are destroyed, because the compiler gives the default destroyer.
Destructors are invoked in the riverse order

Output:
Contructor
Contructor
Contructor
Destructor
Destructor
Destructor

*/