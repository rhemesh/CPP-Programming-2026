#include<iostream>

using namespace std;

class test
{
    int a;
    public:
    test()
    {
        a = 2;
        cout<<"Constructor"<<endl;
    }
    ~test()
    {
        cout<<"Destructor"<<endl;
    }
};
void func()
{
    static test t;
    cout<<"Inside function"<<endl;
}
int main()
{
    cout<<"First call"<<endl;
    func();

    cout<<"Second call"<<endl;
    func();

    cout<<"Third call"<<endl;
    func();

    cout<<"end"<<endl;

    return 0;

}

/*
Summary:
if the static object is created within any scope then the object  is alive 
throught the program ... if it is a normal object inwhich scope it is decalared 
it will be alive only within that scope not throught the program


Using static object every time object will not be created newly and also the object stays till the end .

Output: static test t;
First call
Constructor
Inside function
Second call
Inside function
Third call
Inside function
end
Destructor


Output: test t;
First call
Constructor
Inside function
Destructor
Second call
Constructor
Inside function
Destructor
Third call
Constructor
Inside function
Destructor
end

*/