#include<iostream>

using namespace std;

class marks
{
    int subject1,subject2;
    public:
    marks(int x = 50,int y = 90)
    {
        subject1 = x;
        subject2 = y;
        cout<<"default arguments function"<<endl;
    }
    void display()
    {
        cout<<"Subject1 = "<<subject1<<" "<<"Subject2 = "<<subject2<<endl;
    }

};

int main()
{
    marks m1;   //creating default obejct (this is not pass any argument)
    m1.display();
    marks m2(10); //passing only 1 argument (the remaining parameter will be assiged with default)
    m2.display();
    marks m3(60,70); //passing 2 arguments
    m3.display();

    return 0;
}

/*
Constructor with default parameters:
if no arguments are passed while creating object,constructor will take default parameters 

Output:

default arguments function
Subject1 = 50 Subject2 = 90
default arguments function
Subject1 = 10 Subject2 = 90
default arguments function
Subject1 = 60 Subject2 = 70

*/