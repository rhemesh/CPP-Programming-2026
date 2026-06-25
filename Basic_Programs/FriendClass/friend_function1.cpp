#include<iostream>

using namespace std;

class friendfunc
{
    int a,b;
    public:

    friendfunc(int a,int b)
    {
        this->a = a;
        this->b = b;
        cout<<"Constructor"<<endl;
    }
    ~friendfunc()
    {
        cout<<"Destructor"<<endl;
    }
    friend void display(friendfunc);

};

void display(friendfunc s)
{
    cout<<"a = "<<s.a<<" "<<"b = "<<s.b<<endl;
    cout<<"Inside display function"<<endl;
}

int main()
{
    friendfunc obj(2,12);
    display(obj);
    cout<<"Main end"<<endl;
    return 0;

}
/*
Normally when we write only the declaration of the function in the class and try 
to define it outside the class we where using the class name & the :: scope 
resolution operator but for the same thing if we declare it as a friend then we 
dont have to use the class name & the :: Scope resolution operator also.

Output:
Constructor
a = 2 b = 12
Inside display function
Destructor
Main end
Destructor

*/