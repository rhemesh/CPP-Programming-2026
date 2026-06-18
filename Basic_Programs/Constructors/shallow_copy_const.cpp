#include<iostream>

using namespace std;

class test
{
    int a,b;
    public:
    test(int x,int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }
};


int main()
{
    test obj(5,10);
    obj.display();
    test obj1(obj);  //shallow copy
    obj1.display();
    test obj3 = obj;
    obj3.display();

    return 0;

}

/*
Summary:

Copy constructor:

copy constructor is called when new object is created fram an already existing object.
Syntax: 
1. class_name object_for_class(existing_object);
2. class_name object_for_class = existing_object;


Types:
1.Shollow copy
2.Deep Copy

Shollow copy:
Whenever an constructor is invoked it will first search for the userdefined copy constructor ,if there is no user
defined constructor ,compiler would have provided an default copy constructor hence it will perform shallow copy.
here all the objects created by an existing onject will share an same memory ,if datamembers 
are changed in one thing will reflect everywhere.

Usually shallow copy will happen whenever if ther is no userdefined copy constructor.

Deep Copy:
If there is an userdefined copy constructor in our class the deep copy is performed.
If we are creating an copy constructor,at the time of compilation compiler will serach for an user
defined copy constructor if it finds it will do deep copy and memory is created seperately.
Syntax:
class_name (const class_name &old_obj)
{
}

Output:
a = 5 b = 10
a = 5 b = 10
a = 5 b = 10



*/