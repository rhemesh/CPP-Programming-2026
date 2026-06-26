#include<iostream>

using namespace std;

class logicalAnd
{
    int A,B;
    public:
    logicalAnd(int A = 2,int B=0)
    {
        this->A = A;
        this->B = B;
    }
    void display()
    {
        cout<<"A = "<<A<<" "<<"B = "<<B<<endl;
    }
    void operator&&(const logicalAnd &o)
    {
        logicalAnd obj;
        obj.A = A && o.A; 
        obj.B = B && o.B;
        obj.display();

    }
};

int main()
{
    logicalAnd obj(2);
    logicalAnd obj1(3,4);
    obj.display();
    obj1.display();
    obj && obj1; //logical and operator overloading

    return 0;

}
/*

Summary:
logical and && operator overloading with member function

Output:

A = 2 B = 0            
A = 3 B = 4
A = 1 B = 0

*/