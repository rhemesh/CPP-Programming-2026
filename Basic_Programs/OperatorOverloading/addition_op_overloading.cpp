#include<iostream>

using namespace std;

class op
{
    int a,b;
    public:
    op(int x = 0,int y = 0)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }
    void operator +(op&);
};

void op::operator+(op& o)
{
    op sum;
    sum.a = a + o.a;
    sum.b = b + o.b;
    sum.display();   //displaying the result after the addition
}

int main()
{
    op obj(2,3);   //creating 1st object
    op obj1(3,4);  //creating second object
    obj.display();  //displaying 1st object values
    obj1.display(); //displaying 2nd object values
    obj+obj1; //calling addition function overloading 

    return 0;

}

/*
Summary:

For addition of two object we need to create 2 objects and the other one to store the values of the sum

Output:

a = 2 b = 3
a = 3 b = 4
a = 5 b = 7

*/