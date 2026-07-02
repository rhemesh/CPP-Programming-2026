#include<iostream>

using namespace std;

class par
{
    public:
    par()
    {
        cout<<"par constructor"<<endl;
    }
    ~par()
    {
        cout<<"destructor"<<endl;
    }
};

class child1 : public par
{
    public:

    child1()
    {
        cout<<"child1 constructor"<<endl;
    }
    ~child1()
    {
        cout<<"child1 destructor"<<endl;
    }
};

class child2 : public par{
    public:
    child2()
    {
        cout<<"child2 constructor"<<endl;
    }
    ~child2()
    {
        cout<<"child2 destructor"<<endl;
    }
};

int main()
{
    child1 c1;
    child2 c2;

    return 0;

}


/*

Output:

par constructor
child1 constructor
par constructor
child2 constructor
child2 destructor
destructor
child1 destructor
destructor

*/