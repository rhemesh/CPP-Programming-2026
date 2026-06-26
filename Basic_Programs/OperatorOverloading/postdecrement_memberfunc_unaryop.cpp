#include<iostream>

using namespace std;

class op
{
    int a;
    public:
    op(int a = 0)
    {
        this->a = a;
    }
    void operator--(int)
    {
        a--;
    }
    void display()
    {
        cout<<"a = "<<a<<endl;
    }
};

int main()
{
    op ob(20);
    ob.display();
    ob--;
    ob.display();
    ob--;
    ob.display();

    return 0;

}

/*
Summary: Post decrementing object using unary operator overloading with member function

Output:

a = 20
a = 19
a = 18


*/