#include<iostream>

using namespace std;
int sum(int a,int b = 0,int c = 1,int d = 2);
int main()
{
    cout<<sum(20)<<endl;
    cout<<sum(10,20,30)<<endl;
    cout<<sum(12,43)<<endl;

}

int sum(int a,int b,int c,int d)
{
    return  a+b+c+d;
}

/*
Summary:
Default arguments:If we declare the parameters in the function declaration by default ,
then no need to pass all the parameters from the function call ,if we pass few parameters other parameters are taken from the default values.


values provided to fdunction decalaration that is automatically assigned by the
compiler if the caller of the function doesnot provide any value while calling
the function.
-> default arguments should be always provide from RHS to LHS
default arguments should be provided in func dec, or prototype


Output:
23    
62
58



*/