#include<iostream>

using namespace std;

class par 
{
    public:
    virtual void show() = 0;  //pure virtual function
};

class child : public par
{
    int a,b;
    public:
    child(int x = 2,int b = 23)
    {
        a = x;
        this->b = b;
    }
    void show()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }
};

int main()
{
    par *obj;   
    //par obj1;  //creation of object for the pure virtua function is not possible because it is a abstract class
    child c(12,34);
    obj = &c;
    obj->show();
    return 0;
}


/*
Summary:

Pure Virtual Function:
if a class has a function equated to zero then we say it is a pure virtual 
function. a pure virtual function acts as a dummy function so whenever we have a 
purevirtual function inside the class we say that class is an abstract class.
Abstract class is just for presence and it has no object created because if a 
class is abstract then we cannot instantiate an abstract class.

Output:

a = 12 b = 34

*/