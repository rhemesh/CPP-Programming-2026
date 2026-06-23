#include<iostream>

using namespace std;

class trial
{
    public:
    trial()
    {
        cout<<"constructor called"<<endl;
    }
};
int main()
{
    trial *b = new trial; //dynamic object
    trial b1;//static object

    delete b;  //deallocating of allocated memory
}

/*
Summary :

Creating class object dynamically using - new.
syntax:
class_name ptr_objectname = new class_name;


Output:
constructor called
constructor called

*/