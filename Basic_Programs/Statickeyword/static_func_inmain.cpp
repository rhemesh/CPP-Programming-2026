#include<iostream>

using namespace std;

class test
{
    int a;
    static double n;
    public:
    test()
    {
        a =20;
        cout<<"Constructor"<<endl;
    }
    ~test()
    {
        cout<<"Destructor"<<endl;
    }

    static void print()
    {
        //cout<<"non static dm  - a = "<<a<<endl; //non static data member cannot be accessed in static function
        cout<<"static dm  - n = "<<n<<endl;
    }
};
double test::n = 20.5; //defining double static data member

int main()
{
    test obj;
    
    obj.print(); //we can access the static member function using class name and scope resolution operator

    test::print();

    return 0;

}

/*
Summary:

static function can be accessed in main function using the class name and scope resolution(::)

Output:
Constructor
static dm  - n = 20.5
static dm  - n = 20.5
Destructor


*/
