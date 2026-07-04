#include<iostream>

using namespace std;

template <class m,class n>
class math
{
    m x;
    n y;
    public:
    void set_values(m x,n y)
    {
        this->x = x;
        this->y = y;
    }

    void addition()
    {
        cout<<"addition of x+y: "<<x+y<<endl;
    }

    void multiply()
    {
        cout<<"product of x*y: "<<x*y<<endl;
    }
};
int main()
{
    math<int,int>m;
    m.set_values(12,24);
    math<int,double>m1;
    m1.set_values(12,32.234);
    math<double,double>m2;
    m2.set_values(224.34,344.33);

    m.addition();
    m.multiply();

    m1.addition();
    m1.multiply();

    m2.addition();
    m2.multiply();

    return 0;

}

/*
Summary:
Template class with diffrent datatypes 

Output:

addition of x+y: 36
product of x*y: 288
addition of x+y: 44.234
product of x*y: 386.808
addition of x+y: 568.67
product of x*y: 77247

*/