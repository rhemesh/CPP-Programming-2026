#include<iostream>

using namespace std;

class test
{
    int a,b;
    public:
    //To distinguish the class members from the parameters, we use this->:
    test(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }
    void add()
    {
        cout<<"a+b = "<<a+b<<endl;
    }
};

int main()
{
    test t(2,12);
    t.display();
    t.add();

    return 0;
}

/*
Summary:
this-> will diffrentiate the parameters of the class member and the local received parameters

Output:
a = 2 b = 12
a+b = 14

*/