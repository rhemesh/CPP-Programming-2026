#include<iostream>

using namespace std;

class par
{
    public:
    virtual void display()
    {
        cout<<"Inside parent class"<<endl;
    }
};

class child : public par{
    public:
    void display()
    {
        cout<<"Inside child class"<<endl;
    }
};

int main()
{
    par *obj;
    child c;
    obj = &c; //upcasting
    obj->display(); //pointer pointing to the derived class
    c.display();

    return 0;

}

/*

Summary:

upcasting with virtual keyword in parent class:

Function overriding

the function with the same name same number of arguments even if they donot 
follow any function signatures is known as function overridding 
the function overriding can be achieved by inheritance either single level or 
multilevel inheritance
function overriding comes under runtime polymorphism that is late binding

Function overriding can be done in two forms:
1.upcasting
2.by using virtual function

Upcasting:
when we have a base class pointer pointing to the derived class object then 
technically it is termed as upcasting


to achieve a runtime polymorphism we need to make our base class function as 
virtual so that late binding will be taken place when we make the base class 
function as virtual then it is inherited in the derived class but it will 
consider as invisible

Late binding:
func call instead of executing at compile tile if we want to resolve at runtime 
then we can make our function as virtual in the base call..

Mechanism of late binding:
->the virtual keyword to a function can be applied only inside the base class 
that means child class cannot have any virtual function-> whenever we say that the function is virtual then at the runtime the compiler 
will use the virtual table and a virtual pointer
which is also known as Vtable or Vptr at runtime we also perform upcasting that 
means we deal with pointer & the addresses of virtual functions is stored
inside the vtable and the pointer points to the address of that object stored 
inside the vtable.

Output:

Inside child class
Inside child class
*/