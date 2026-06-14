#include<iostream>
using namespace std;

//class keyword class name
class test
{
    //Data members
    int a = 10;
    double b = 12.5;
    public:
    //Member functions
    void add(int x)
    {
        cout<<"Addition of a, b and x = "<<a+b+x<<endl;
    }
    void product(double x)
    {
        cout<<"product of a, b and x = "<<a*b*x<<endl;
    }
};

int main()
{
    //creating class object
    test t1;
    t1.add(12);
    t1.product(2);
    //creating another class object
    test t2;
    t2.add(10);
    t2.product(5);

    return 0;

}

/*
Summary:
class is a combination of data memebers and a member function inside the class.
the class will work only when we declare a object to the class
n objects can be created for the class which allocates memory seperately for each object.
object is a variable of a class and we can also say,its and instance of a class

Output:
Addition of a, b and x = 34.5
product of a, b and x = 250
Addition of a, b and x = 32.5
product of a, b and x = 625




*/