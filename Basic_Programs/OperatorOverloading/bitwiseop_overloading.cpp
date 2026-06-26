#include<iostream>

using namespace std;

class bitwiseop
{
    int A,B;
    public:
    bitwiseop(int x,int y = 0)
    {
        A = x;
        B = y;
        cout<<"Constructor"<<endl;
    }

    ~bitwiseop()
    {
        cout<<"Destructor"<<endl;
    }
    
    void display()
    {
        cout<<"A = "<<A<<" "<<"B = "<<B<<endl;;
    }

    void operator&(bitwiseop &);
};

void bitwiseop::operator&(bitwiseop & obj)
{
    bitwiseop res(2);
    res.A = A & obj.A;
    res.B = B & obj.B;

    res.display();
}

int main()
{
    bitwiseop obj(2,5);
    bitwiseop obj1(10);
    obj.display();
    obj1.display();
    obj & obj1;

    return 0;

}

/*

Summary:

Bitwise& operator overloading with member function
10 ->  1010
02 ->  0010
res =  0010 ==>convert to decimal -> 2;

Output:
Constructor        
Constructor
A = 2 B = 5
A = 10 B = 0
Constructor
A = 2 B = 0
Destructor
Destructor
Destructor


*/