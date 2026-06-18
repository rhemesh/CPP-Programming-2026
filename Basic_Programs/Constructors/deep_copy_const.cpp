#include<iostream>

using namespace std;

class test
{
    int x,y;
    public:
    test(int a,int b)
    {
        x = a;
        y = b;
    }
    test (test &d)
    {
        x = d.x;
        y = d.y;
    }
    void display()
    {
        cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
    }
};

int main()
{
    test t1(23,10);
    t1.display();
    test t2(t1); //deep copy (creates seperate memory )
    t2.display();
    test t3 = t2;
    t3.display();

    return 0;

}

/*

Deep Copy:
If there is an userdefined copy constructor in our class the deep copy is performed.
If we are creating an copy constructor,at the time of compilation compiler will serach for an user
defined copy constructor if it finds it will do deep copy and memory is created seperately.
Syntax:
class_name (const class_name &old_obj)
{
}

Output:

x = 23 y = 10
x = 23 y = 10
x = 23 y = 10




*/