#include<iostream>
using namespace std;
namespace first
{
    int a = 10;
    void func()
    {
        cout<<"This is first namespace"<<endl;
    }
}

#if 1
namespace second
{
    int a = 15;
    void func()
    {
        cout<<"This is second namespace"<<endl;
    }
}
#else
namespace second
{
    int a = 15;
    void func()
    {
        cout<<"This is second namespace"<<endl;
        //Other namespace variables can be accessed inside this namespace ,
        //using the name of that particulat namespace 
        cout<<"Accessing variable from first namespace; a = "<<first::a<<endl;
    }
}
#endif

int main()
{
    cout<<first::a<<endl;
    first::func();

    cout<<second::a<<endl;
    second::func();

    return 0;
}

/*
Summary:
1st type to avoid name conflicts using :: scope resolution operator
Using namespace name conflicts of variables and functions can be avoided,
We can reuse the variable name and the function name with the help of namespace
It can be called like first::func(); first can be of any name.

Real Life Scenario:
This can be use whenever multiple people working on sameproject,there is a changes of using same variable name by multiple people,
So using namespace that can be avoided.

Output:(when #if 1)
10
This is first namespace
15
This is second namespace

Output:(when #if 0)
10    
This is first namespace
15
This is second namespace
Accessing variable from first namespace; a = 10

*/

