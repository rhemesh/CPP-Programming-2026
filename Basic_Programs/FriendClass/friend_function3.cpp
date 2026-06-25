#include<iostream>

using namespace std;

class ff
{
    int x,y;
    public:
    ff()
    {
        x = 2;
        y = 5;
        cout<<"Constructor called"<<endl;
    }
    ~ff()
    {
        cout<<"Destructor"<<endl;
    }
    void multi()
    {
        cout<<"product of x and y = "<<x*y<<endl;
    }
    friend void func();
};
void func()
{
    ff obj;
    obj.multi();
}

int main()
{
    func();
    cout<<"Main"<<endl;
    return 0;

}


/*
Summary:
Creating object inside the friend function:object is local to that friend function;
object is destroyed once function finishes it's work

Output:

Constructor called
product of x and y = 10
Destructor
Main


*/