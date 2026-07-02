#include<iostream>

using namespace std;

class number{
    protected:
    int n;
    public:
    void set_value(int x = 10)
    {
        n = x;
    }
};

class square : public number
{
    public:
    int findsquare()
    {
        return n*n;
    }
};

class cube : public number{
    public:
    int findcube()
    {
        return n*n*n;
    }
};

int main()
{
    square s;
    s.set_value();
    cout<<s.findsquare()<<endl;

    cube c;
    c.set_value();
    cout<<c.findcube()<<endl;

    return 0;

}

/*

Output:

100        
1000

*/