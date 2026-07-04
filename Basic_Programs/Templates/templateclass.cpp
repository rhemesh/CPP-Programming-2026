#include<iostream>

using namespace std;

template<class t>
class test
{
    t a,b;
    public:
    test(t x,t y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }
};

int main()
{
    test<int>obj(4,34);
    test<double>obj1(32.234,234.234);
    test<char>obj2('c','e');
    test<string>obj3("Hello","world");

    obj.display();
    obj1.display();
    obj2.display();
    obj3.display();

    return 0;

}

/*

Summary:
template class : 

template can be used in class for any data type

Output:

a = 4 b = 34
a = 32.234 b = 234.234
a = c b = e
a = Hello b = world

*/