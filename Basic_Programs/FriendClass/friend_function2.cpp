#include<iostream>

using namespace std;

class friendfunction
{
    int a,b,c;
    public:
    friendfunction()
    {
        a = 2,b=4,b=8;
        cout<<"Constructor"<<endl;
    }

    ~friendfunction()
    {
        cout<<"Destructor"<<endl;
    }
    friend int mean(friendfunction);  //friend function of the class;called using class name
};

int mean(friendfunction f)   //new local object will be creted here
{
    cout<<"Inside mean function"<<endl;
    int res = (f.a + f.b + f.c)/3;
    return res;
}

int main()
{
    friendfunction obj;
    cout<<mean(obj)<<endl; //calling mean function by copying obj 

    return 0;

}

/*
Summary:
friend function from main is called by passing obj as a argument which copies the obj to the mean function


Output:
Constructor
Inside mean function
6
Destructor
Destructor


*/