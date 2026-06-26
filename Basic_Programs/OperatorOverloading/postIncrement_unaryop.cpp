#include<iostream>

using namespace std;

class Op{
    int a;
    public:
    Op(int x = 0)
    {
        a = x;
        cout<<"Constructor"<<endl;
    }
    ~Op()
    {
        cout<<"Destructor"<<endl;
    }
    void print()
    {
        cout<<"a = "<<a<<endl;
    }
    friend void operator++(Op&,int);  //post increment unary operator overloading (int )is used for postfix

};

void operator++(Op &s,int) //(int)  is used for postfix 
{
    s.a++;
    //cout<<"s.a = "<<s.a<<endl;
}

int main()
{
    Op obj(20);
    obj.print();
    obj++;    //incrementing object
    obj.print();
    obj++;
    obj.print();

    return 0;
    
}

/*
Summary:
Unary post increment operator overloading:

using friend function incrementing an operator overloading for unary post incrementing

Output:
Constructor
a = 20
a = 21
a = 22
Destructor

*/