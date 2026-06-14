#include<iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swapping values inside function: "<<a<<" "<<b<<endl;
}

int main()
{
    int a = 10;
    int b = 20;
    cout<<"Before swapping values in main: "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After swapping values: "<<a<<" "<<b<<endl;

    return 0;
}
/*
Summary:
Call by reference:where arguments are  passed and received using reference operator which refers the 
address of the original variable.
If that passed variable is changed inside the function it will change the original variable.

Output:
Before swapping values in main: 10 20
After swapping values inside function: 20 10
After swapping values: 20 10

*/