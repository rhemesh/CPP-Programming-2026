#include<iostream>

using namespace std;
class sample
{
    int a,b;
    public:
    sample() //constructor with same name as class name
    {
        a = 10;
        b = 4;
    }
    void display()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }
};
int main()
{
    sample s;   //creating class object
    s.display(); //calling class member function using class object

    return 0;
}


/*

Summary:
constructor: 
1.It is the special member function of a class 
2.It is used to set the values of the data member of a class 
3.The name of the constructor will be same as the class name
4.The constructor donot have a return type
5.constructors are automatically inkoved when we create an object of a class

Types:
Default constructor  
Parameterised constructor
Copy constructor

Default constructor:
No arguments will be passed from the object

Output:

a = 10 b = 4


*/