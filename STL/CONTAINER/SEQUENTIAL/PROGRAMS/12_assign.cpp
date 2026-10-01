#include<iostream>
#include<vector>
#include<deque>
#include<list>

using namespace std;

int main()
{
    vector<int> vec = {32,43,43,3452,34};
    cout<<"Before using assign values are: "<<endl;
    for(int x : vec)
        cout<<x<<" "; //prints 32 43 43 3452 34
    cout<<endl;
    vec.assign(5,100); //assigns all 5 elements with the value 100
    cout<<"After using assign values inside vector are:"<<endl;
    for(int x : vec)
        cout<<x<<" "; //prints 100 100 100 100 100
    cout<<endl;

    deque<int> deq = {23,34,46,464,345,34};
    cout<<"Before using assign values are: "<<endl;
    for(int x : deq)
        cout<<x<<" "; //prints 23 34 46 464 345 34
    cout<<endl;
    deq.assign(7,200); //assigns all 5 elements with the value 200
    cout<<"After using assign values inside deque are:"<<endl;
    for(int x : deq)
        cout<<x<<" "; //prints 200 200 200 200 200 200 200 


    list<int> lst = {34,32,45,67,45,567};
     cout<<"Before using assign values are: "<<endl;
    for(int x : lst)
        cout<<x<<" "; //prints 34 32 45 67 45 567
    cout<<endl;
    lst.assign(2,344); //assigns two elements with the value 344
    cout<<"After using assign values inside list are:"<<endl;
    for(int x : lst)
        cout<<x<<" "; //prints 344 344

    return 0;
}

/*
Output:

Before using assign values are: 
32 43 43 3452 34 
After using assign values inside vector are:
100 100 100 100 100 
Before using assign values are: 
23 34 46 464 345 34 
After using assign values inside deque are:
200 200 200 200 200 200 200 Before using assign values are: 
34 32 45 67 45 567 
After using assign values inside list are:
344 344 

*/