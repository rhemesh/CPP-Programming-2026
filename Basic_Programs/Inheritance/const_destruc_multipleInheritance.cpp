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

class par2
{
    public:
    par2()
    {
        cout<<"par2 constructor"<<endl;
    }
    ~par2()
    {
        cout<<"par2 destructor"<<endl;
    }
};

class child : public par1,public par2
{
    public:
    child()
    {
        cout<<"child constructor"<<endl;
    }
    ~child()
    {
        cout<<"child destructor"<<endl;
    }
};

int main()
{
    child c;

    return 0;

}

/*

Output:

par1 constructor
par2 constructor
child constructor
child destructor
par2 destructor
par1 destructor

*/