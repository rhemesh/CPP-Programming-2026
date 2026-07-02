#include<iostream>

using namespace std;

class par1
{
    public:
    par1()
    {
        cout<<"par1 constructor"<<endl;
    }
    ~par1()
    {
        cout<<"par1 destructor"<<endl;
    }
};

class par1child1 : public par1
{
    public:
    par1child1()
    {
        cout<<"par1child1 constructor"<<endl;
    }
    ~par1child1()
    {
        cout<<"par1child1 destructor"<<endl;
    }
};

class par1child2 : public par1child1
{
    public:
    par1child2()
    {
        cout<<"par1child2 constructor"<<endl;
    }
    ~par1child2()
    {
        cout<<"par1child2 destructor"<<endl;
    }
};

int main()
{
    par1child2 o;

    return 0;

}

/*

Output:

par1 constructor
par1child1 constructor
par1child2 constructor
par1child2 destructor
par1child1 destructor
par1 destructor


*/