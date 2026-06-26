#include<iostream>

using namespace std;

class op{
    int x;
    public:
    op(int x = 1)
    {
        this->x = x;
        cout<<"Inside Constructor"<<endl;
    }
    ~op()
    {
        cout<<"Inside Destructor"<<endl;
    }

    void display()
    {
        cout<<"x = "<<x<<endl;
    }

    friend void operator++(op&);
};
void operator++(op &a)
{
    a.x++;
}
int main()
{
    op obj(12);
    obj.display();
    ++obj;
    obj.display();
    ++obj;
    obj.display();

    return 0;

}

/*
Summary:
Pre increment unary operator overloading.

Object can be preincremented  ++obj;

Output:

Inside Constructor
x = 12
x = 13
x = 14
Inside Destructor


*/