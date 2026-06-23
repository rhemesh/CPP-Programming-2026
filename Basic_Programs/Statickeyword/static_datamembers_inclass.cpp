#include<iostream>

using namespace std;

class test
{
    static int a; //static data member
    public:
    test()
    {
        cout<<"Constructor"<<endl;
    }
    ~test()
    {
        cout<<"Destructor"<<endl;
    }
    void set()
    {
        a = 20;   //defining static data member
        cout<<"Setting a value"<<endl;
    }
    void display()
    {
        cout<<"a = "<<a<<endl;
    }
};
int test::a = 10; //defining static data member outside class
int main()
{
    test t;
    t.display();
    t.set();
    t.display();
    

    return 0;
}
/*

Summary:
1.we cannot initialised a static data mem of the class within a class
2.static data members can be access within static function & normal fuctions but 
non static dat members cannot be accessed inside the static function of the 
class
3.static dat member are explicitly intialized outside the class with the scope 
resolution operators

Output:

Constructor
a = 10
Setting a value
a = 20
Destructor

*/