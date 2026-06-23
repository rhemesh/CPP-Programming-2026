#include<iostream>

using namespace std;

class Test
{
    public:
    Test()
    {
        cout<<"Constructor called"<<endl;
    }
    ~Test()
    {
        cout<<"Destructor called"<<endl;
    }
};

void func_to_create_object()
{
    static Test t;    //creating class object using static - this will not create object all the time 
    cout<<"Inside function to create object"<<endl;
}

int main()
{
    func_to_create_object();
    func_to_create_object();
    func_to_create_object();

    return 0;
}

/*
Summary:
A static class object is an object that is created only once and exists for the 
entire lifetime of the program.

Output:
if ---- static Test t;  //using static while creating object for the class

Constructor called
Inside function to create object
Inside function to create object
Inside function to create object
Destructor called

if ---- Test t;   //without using static

Constructor called
Inside function to create object
Destructor called
Constructor called
Inside function to create object
Destructor called
Constructor called
Inside function to create object
Destructor called



*/