#include<iostream>

using namespace std;

template<class t>
class test
{
    t x;
    public:
    test(t x)
    {
        this->x = x;
    }
    void display();
};
template<class T>   //creating template to know for the type of the obj parameters
void test<T>::display()
{
    cout<<"x = "<<x<<endl;
}

int main()
{
    test<int>obj(5);
    test<double>obj2(24.324);
    test<string>obj3("hello");
    test<char>o('R');

    obj.display();
    obj2.display();
    obj3.display();
    o.display();

    return 0;

}

/*
Output:
x = 5      
x = 24.324
x = hello
x = R

*/