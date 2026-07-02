#include<iostream>

using namespace std;

class par
{
    public:
    par()
    {
        cout<<"par construction"<<endl;
    }
    ~par()
    {
        cout<<"par destructor"<<endl;
    }
};

class child1 : public par{
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

class child : public child1 , public child2
{
    public:

    child()
    {
        cout<<"child constrctor"<<endl;
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

par construction
child1 constructor
par construction
child2 constructor
child constrctor
child destructor
child2 destructor
par destructor
child1 destructor
par destructor

*/