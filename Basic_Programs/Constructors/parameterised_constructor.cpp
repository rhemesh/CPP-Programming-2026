#include<iostream>

using namespace std;
class sample 
{
    int a,b;
    public:
    sample(int x,int y) //Parameterised constructor
    {
        a = x;
        b = y;
        cout<<"Constructor Invoked"<<endl;
    }
    void display()
    {
        cout<<"a = "<<a <<" "<<"b = "<<b<<endl;
    }
};

int main()
{
    sample s1(10,4),s2(2,4); //Passed arguments while creating object
    s1.display();
    s2.display();

    return 0;

}

/*
Summary:
Parameterised Constructor: Arguments will be passed whe object is created.

Output:

a = 10 b = 4
a = 2 b = 4


*/