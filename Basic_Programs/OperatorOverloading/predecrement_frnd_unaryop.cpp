#include<iostream>

using namespace std;

class op{
    int a;
    public:
    op(int x = 7)
    {
        a = x;
        cout<<"Inside Constructor"<<endl;
    }
    ~op()
    {
        cout<<"Destroyed object"<<endl;
    }

    void display()
    {
        cout<<"a = "<<a<<endl;
    }
    friend void operator--(op &);

};

void operator--(op& a)
{
    --a.a;
    cout<<"Inside Pre-decrement function "<<endl;
}

int main()
{
    op o(12);
    o.display();
    --o;  //pre-decrementing
    o.display();
    --o;  //pre-decrementing
    o.display();
    --o;  //pre-decrementing
    return 0;

}

/*
Summary:

pre-decrementing the obj using unary operator overloading with friend function

Output:

Inside Constructor
a = 12
Inside Pre-decrement function 
a = 11
Inside Pre-decrement function 
a = 10
Destroyed object



*/