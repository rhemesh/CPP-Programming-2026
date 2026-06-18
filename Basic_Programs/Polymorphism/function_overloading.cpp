#include<iostream>

using namespace std;
int sum(int x,int y)
{
    return x+y;
}
int sum(int x,int y,int z)
{
    return x+y+z;
}
double sum(double x,int y)
{
    return x+y;
}

void sum(int y,double x)
{
    cout<<x+y<<endl;
}
int main()
{
    cout<<sum(10,5)<<endl;
    cout<<sum(2,5,6)<<endl; //Number of arguments
    cout<<sum(10.5, 6)<<endl; //type of arguments
    sum(10,5.5); //order of arguments

    return 0;
    
}

/*
Summary:
Function loading of the function can be done by:
1.changing the order of the arguments.
2.Number of arguments.
3.type of arguments.

function return type will not have anyrole in the function overloading
Name mangling:
when we provide function overloading to the function ,internally compiler will first check 
the signature and later it will assign new names to the function that it wants to recognise.

Output:
15
13
16.5
15.5

*/