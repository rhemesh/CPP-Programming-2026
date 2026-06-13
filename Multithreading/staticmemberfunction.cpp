#include<iostream>
#include<thread>

using namespace std;

class Base
{
    public:
    //creating a static function inside a class so that no need to create an object to the class inside the main function
    static void func(int x)
    {
        while( x <= 15)
        {
            cout<<"count = "<<x<<endl;
            ++x;
        }
    }
};
int main()
{
    //creating thread by passing the address of the class name and the function name along with extra arguments
    thread t(&Base::func,14);

    t.join();
    return 0;
}

/*
Summary:
Creating thread using static member function ,Unlike non static no need to create an object to the class inside the main function 
Pass that as an address in an thread.Instead using static while creating a member function inside the class.

Output:
count = 14             
count = 15

*/