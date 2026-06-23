#include<iostream>

using namespace std;

class sports
{
    public:
    sports()
    {
        cout<<"Inside sports class"<<endl;
    }
};
int main()
{
    sports s[3]; //static object creation //temperory allocation
    sports *s1 = new sports;  //dynamic memory allocation
    sports *arrayObjects = new sports[4];//array of dynamic memory allocation
    delete s1;   //de-allocating dynamic memory allocation
    delete []arrayObjects;//de-allocationg array of dynamic memory allocation

    return 0;
}

/*
Summary:

Array of dynamic memory allocation :
creating array of objects by dynamically alloacting memory. 


Output:

Inside sports class
Inside sports class
Inside sports class
//first three created using static memory alloaction of objects  sports s[3];
Inside sports class
//above one constructor is called by creating object dynamically memory allocation    sports *s1 = new sports;
Inside sports class
Inside sports class
Inside sports class
Inside sports class
//these four constructors are called by creating array of objects dynamically memory alloc-.sports *arrayObjects = new sports[4];
*/