#include<iostream>
#include<thread>

using namespace std;

//creation of class with public and the member function called func to print the count
class Base
{
public:
    void func(int x)
    {
        while(x --> 0)
        {
            cout<<"Count = "<<x<<endl;
        }
    }
};
int main()
{
    //Object for the class has been created using class name 
    Base b;
    //Passing the address of the class with and reference of the member function inside the class and also 
    //passing the class object address with arguments if required
    thread t(&Base::func,&b,7);

    t.join();

    return 0;
}
/*
Summary:
Creating a thread using non static member function type 4 of creating a thread.
1.Class with public has to be created with member function inside to print the count
2.Class name with ref of member function address and also the class object which created in the main has to be passed along 
with the arguments if required.

Output:
Count = 6                    
Count = 5
Count = 4
Count = 3
Count = 2
Count = 1
Count = 0

*/