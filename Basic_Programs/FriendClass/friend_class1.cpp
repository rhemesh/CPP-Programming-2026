#include<iostream>

using namespace std;

class A{
    int a;
    public:
    A()
    {
        a = 2;
        cout<<"A constructor"<<endl;
    }
    ~A()
    {
        cout<<"A destructor"<<endl;
    }
    void display()
    {
        cout<<"A:a = "<<a<<endl;
    }
    friend class B;  //creating friend class declaration
};

class B   //friend class
{
    int b;
    public:
    B()
    {
        b = 12;
        cout<<"B Constructor"<<endl;
    }
    ~B()
    {
        cout<<"B destructor"<<endl;
    }

    void display()
    {
        cout<<"B:b = "<<b<<endl;
    }
    void add(A& a)   //copy of the class A object
    {
        cout<<"addition of a and b (a+b) = "<<a.a+b<<endl;    //can be accessed class a datamembers using obj.datamember
    } 

};

int main()
{
    A a;
    B b;
    a.display();
    b.display();
    b.add(a);

    return 0;

}

/*
Summary: Having friendship from one class to another is called friend class.
Passing class obj as a reference to the class B

Output:

A constructor
B Constructor
A:a = 2
B:b = 12
addition of a and b (a+b) = 14
B destructor
A destructor

*/
