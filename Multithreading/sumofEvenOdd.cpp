#include<iostream>
#include<thread>
using namespace std;
long long even_sum = 0;
long long odd_sum = 0;

void Evensum(int strat,int end)
{
    int i = strat;
    while(i<=end)
    {
        if((i&1) == 0)
        {
            even_sum += i;
        }
        i++;
    }
}

void OddSum(int start, int end)
{
    int i = start;
    while(i<=end)
    {
        if((i&1) == 1)
        {
            odd_sum += i;
        }
        i++;
    }
}

int main()
{
    int start = 0;
    int end = 100000;

    thread t1 (Evensum, start, end);
    thread t2 (OddSum, start, end);

    t1.join();
    t2.join();

    cout<<"Sum of even numbers from "<<start<<" to "<<end<<" is: "<<even_sum<<endl;
    cout<<"Sum of odd numbers from "<<start<<" to "<<end<<" is: "<<odd_sum<<endl;

    return 0;

}

/*
summary:Creating two threads with function pointer;to calculate Evensum and Oddsum.

Output :
Sum of even numbers from 0 to 100000 is: 2500050000
Sum of odd numbers from 0 to 100000 is: 2500000000

Note:Any thread can start first 
Output can also be 
Sum of odd numbers from 0 to 100000 is: 2500000000
Sum of even numbers from 0 to 100000 is: 2500050000


*/
