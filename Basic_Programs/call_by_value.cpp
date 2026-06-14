#include<iostream>

using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout<<"After swapping values inside function: "<<a <<" "<<b<<endl;
}

int main()
{
    int a = 10;
    int b = 20;
    cout<<"Before swapping values in main: "<<a << " "<<b<<endl;
    swap(10,20);
    cout<<"After swapping values: "<<a<<" "<<b<<endl;

    return 0;

}
/*
Summary:
This is call by value: where we pass the values to the function ,in function after swapping the value it will not be reflected in the main.


Output:
Before swapping values in main: 10 20
After swapping values inside function: 20 10
After swapping values: 10 20

*/