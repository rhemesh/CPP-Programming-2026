#include<iostream>
#include<thread>

using namespace std;
class Base
{
    public:
    void operator()(int x){
        while(x --> 0)
        {
            cout<<"Count = "<<x<<endl;
        }
    }
};
int main()
{
    //Calling class inside thread with an argumenet passing which calls the function inside the class
    thread t(Base(),15);
    t.join();

    return 0;
}

/*
Summary :
This the functor (Function object) it is a type 3 of creating a thread
1.we create a class with public and the call a function inside the class 
2.while thread creation class name Base() will be passed along with the arguments if we have 

Output:

Count = 14
Count = 13
Count = 12
Count = 11
Count = 10
Count = 9
Count = 8
Count = 7
Count = 6
Count = 5
Count = 4
Count = 3
Count = 2
Count = 1
Count = 0


*/