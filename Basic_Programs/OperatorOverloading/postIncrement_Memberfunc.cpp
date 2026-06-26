#include<iostream>

using namespace std;

class op{
    int x;
    public:
    op(int x = 5) //default parameter declaration(it works when no argument passed)
    {
        this->x = x;
        cout<<"Constructor"<<endl;
    }
    ~op()
    {
        cout<<"Destructor"<<endl;
    }
    void display()
    {
        cout<<"x = "<<x<<endl;
    }
    void operator++(int)   //member function for unary operator increment
    {
       x++;
    }
};

int main()
{
    op obj;
    obj.display();
    obj++;
    obj.display();
    obj++;
    obj.display();

    return 0;

}

/*
Summary:
Unary operator post Increment using member function of the class

Output:
Constructor
x = 5
x = 6
x = 7
Destructor

*/