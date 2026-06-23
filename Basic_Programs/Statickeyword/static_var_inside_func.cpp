#include<iostream>

using namespace std;

int count_function()
{
    static int count = 0;   //static is created only once for the function and it hold the value through out
    count++;
    return count;
}


int main()
{
    cout<<count_function()<<endl;
    cout<<count_function()<<endl;
    cout<<count_function()<<endl;

    return 0;
}

/*
Summary:
A static variable inside a function is created only once and retains its value between function calls.

Output:

if ---- static int count = 0;
1
2
3

if ---- int count = 0;
1
1
1

*/