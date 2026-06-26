#include<iostream>

using namespace std;

class add_op
{
    int x,y;
    public:
    add_op(int x = 0,int y =5)
    {
        this->x = x;
        this->y = y;
    }

    void display()
    {
        cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
    }

    friend void operator+(add_op &, add_op &);
};

void operator+(add_op &obj1,add_op& obj2)
{
    add_op sum;
    sum.x = obj1.x + obj2.x;
    sum.y = obj1.y + obj2.y;
    sum.display();
}

int main()
{
    add_op o(2,3);
    add_op o1(4,5);
    o.display();
    o1.display();
    o+o1;

    return 0;

}

/*
Summary:

Addition of object using addition operator overloading with friend function 
by creatimg sum obj inside friend function and storing the result into sum object

Output:

x = 2 y = 3
x = 4 y = 5
x = 6 y = 8


*/