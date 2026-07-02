#include<iostream>

using namespace std;

class par1   //super class/parent class
{
    protected:
    string name;
    public:
    void set_name(const string name = "Vasu")   //default string 
    {
        this->name = name;
    }
};

class par2  //super class/parent class
{
    protected:
    int age;
    public:
    void set_age(int age = 25)
    {
        this->age = age;
    }
};

class child : public par1,public par2{    //child class inherited from 2 parent classes(Multiple Inheritance)

    public:
    void display()
    {
        cout<<"Name = "<<name<<"\n"<<"Age = "<<age<<endl;
    }

};

int main()
{
    child obj;
    obj.set_name();
    obj.set_age(25);
    obj.display();

    return 0;

}

/*
Summary:

Multiple Inheritance:
child class will be inherited with multiple parent class

Output:

Name = Vasu
Age = 25

*/

