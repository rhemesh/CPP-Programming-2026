#include<iostream>

using namespace std;

class sports
{
    public:
    sports()
    {
        cout<<"Inside sports class Constructor"<<endl;
    }
    ~sports()
    {
        cout<<"Destructor"<<endl;
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


Output:

Inside sports class Constructor
Inside sports class Constructor
Inside sports class Constructor
Inside sports class Constructor
Inside sports class Constructor
Inside sports class Constructor
Inside sports class Constructor
Inside sports class Constructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor
Destructor


*/