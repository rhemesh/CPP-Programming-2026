#include<iostream>

using namespace std;

class test
{
    int a,b;
    public:
    void set(int x,int y)
    {
        a = x;
        b = y;
    }
    int sum()
    {
        return a+b;
    }
};

int main()
{
    test t1,t2;
    t1.set(10,20);
    cout<<"The sum is "<<t1.sum()<<endl;
    t2.set(12,5);
    cout<<"The sum is "<<t2.sum()<<endl;

    return 0;

}
/*
Summary:

Setting values from main function to the member function of the class and expecting it ti give me a sum of both arguments

Output:
The sum is 30
The sum is 17


*/