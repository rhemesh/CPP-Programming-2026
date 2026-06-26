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
    void operator++(); 
  
};
//definedmember function outside the class
void op::operator++()   //member function for unary operator increment
{
    x++;  //unary increment
}
int main()
{
    op obj(3);
    obj.display();
    ++obj;   //preIncrement
    obj.display();
    ++obj;   //preIncrement
    obj.display();
    ++obj;   //preIncrement
    obj.display();
    return 0;

}

/*
Summary:
Unary operator pre Increment using member function of the class

Output:
Constructor
x = 3
x = 4
x = 5
x = 6
Destructor

*/