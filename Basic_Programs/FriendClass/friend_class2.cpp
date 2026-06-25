#include<iostream>
using namespace std;

class A{
    int x;
    public:
    A()
    {
        cout<<"A constructor"<<endl;
        x = 12;
    }

    ~A()
    {
        cout<<"A destructor"<<endl;
    }

    friend class B;
};

class B
{
    int y;
    public:
    B()
    {
        y = 23;
        cout<<"B constructor"<<endl;
    }
    ~B()
    {
        cout<<"B destructor"<<endl;
    }

    void display(A a)
    {
        cout<<"A:x = "<<a.x<<" "<<"B:y = "<<y<<endl;
    }
};

int main()
{
    A obj1;
    B obj2;
    obj2.display(obj1);

    return 0;

}

/*
Summary:
This acts like a pass by value :instead of passing reference for a class this one just pass the obj and received as value 
because of this obj is copied and destructor is called again for class A when function goes out of scope.

Output:
A constructor
B constructor
A:x = 12 B:y = 23
A destructor
B destructor
A destructor


*/