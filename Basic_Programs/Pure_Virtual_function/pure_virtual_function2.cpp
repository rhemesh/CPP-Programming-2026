#include<iostream>

using namespace std;

class par
{
    public:
     par()
    {
        cout<<"par constructor"<<endl;
    }

    virtual ~par()
    {
        cout<<"par destructor"<<endl;
    }
            virtual void show() = 0;


};

class child : public par{
    public:
    child()
    {
        cout<<"child constructor"<<endl;
    }
    ~child()
    {
        cout<<"child destructor"<<endl;
    }
    void show()
    {
        cout<<"Inside display function"<<endl;
    }
};

int main()
{
    par *obj = new child; 
    obj->show();

    // par *obj5;
    // child c;
    // obj5 = &c;
    // obj5->show();
    delete obj;
    return 0;
}

/*

Output:

par constructor       
child constructor
Inside display function
child destructor
par destructor



*/