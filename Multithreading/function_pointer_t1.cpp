#include<iostream>
#include<thread>

using namespace std;
void func(int X)
{
    while(X-- > 0)
    {
        cout<<"Count = "<<X<<endl;
    }
}
int main()
{
    thread t(func,10);

    t.join();

    return 0;
}

/*

There are 45 types of thread creation :
1.Function Pointer
2.Lambda Function
3.Functor (Function Object)
4.Non static member function
5.Static member function


Currently we are using Function pointer and this is the most commonly used thread type

Output:
Count = 9
Count = 8
Count = 7
Count = 6
Count = 5
Count = 4
Count = 3
Count = 2
Count = 1
Count = 0

*/