#include<iostream>

using namespace std;

class test
{
    int a;
    double b;
    public:
    test() //default constructor
    {
        cout<<"This is the default constructor"<<endl;
        a = 10;
        b = 2.244;
    }
    test(double x,int y) //parameterised constructor
    {
        cout<<"This is the parameterised constructor"<<endl;
        a = y;
        b = x;
    }
    void display()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }
};

int main()
{
    test t;
    test t1(12.233,45);
    t.display();
    t1.display();

    return 0;
}

/*
Default and Parameterised constructor :
Both at a time can be called a constructor

Output:

a = 10 b = 2.244
a = 45 b = 12.233


*/