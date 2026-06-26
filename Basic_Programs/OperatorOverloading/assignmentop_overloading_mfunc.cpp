#include<iostream>

using namespace std;

class assignmentop
{
    double n;
    public:
    assignmentop(double x = 23.343)
    {
        n = x;
        cout<<"Inside constructor"<<endl;
    }
    ~assignmentop()
    {
        cout<<"Inside destructor"<<endl;
    }

    void display()
    {
        cout<<"n = "<<n<<endl;
    }

    assignmentop& operator=(assignmentop&);
    
};

assignmentop& assignmentop::operator=(assignmentop & obj1)
{
    n = obj1.n;   //overriding the 1st object with 2nd object value

    return *this;
}

int main()
{
    assignmentop op(54.34);
    op.display();
    assignmentop op1(3435.435);
    op1.display();
    op = op1;  //assignment operator
    op.display();
    return 0;

}

/*

Assignment operator overloading

Assigned operator cannot be overloaded with friend function

Output:

Inside constructor           
n = 54.34
Inside constructor
n = 3435.43
n = 3435.43
Inside destructor
Inside destructor
*/