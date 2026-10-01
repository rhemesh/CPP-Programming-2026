#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> vec1 = {23,34,67,68};
    vector<int> vec2 = {78,67,745,567};
    cout<<"Vector 1 values before swap: ";
    for(int x : vec1)
        cout<<x<<" "; //prints 23 34 67 68
    cout<<endl;
    cout<<"Vector 2 values before swap: ";
    for(int x : vec2)
        cout<<x<<" ";//prints 78 67 745 567
    cout<<endl;

    swap(vec1,vec2);
    cout<<"Vector 1 values after swap: ";
    for(int x : vec1)
        cout<<x<<" ";//prints 78 67 745 567
    cout<<endl;
    cout<<"Vector 2 values after swap: ";
    for(int x : vec2)
        cout<<x<<" "; //prints 23 34 67 68
    cout<<endl;


    deque<int> deq1 = {34,56,67,4,35};
    deque<int> deq2 = {45,456,45,67};

    cout<<"deque 1 values before swap: ";
    for(int x : deq1)
        cout<<x<<" "; //prints 34 56 67 4 35
    cout<<endl;
    cout<<"deque 2 values before swap: ";
    for(int x : deq2)
        cout<<x<<" ";//prints 45 456 45 67
    cout<<endl;

    swap(deq1,deq2);
    cout<<"deque 1 values after swap: ";
    for(int x : deq1)
        cout<<x<<" ";//prints 45 456 45 67
    cout<<endl;
    cout<<"deque 2 values after swap: ";
    for(int x : deq2)
        cout<<x<<" "; //prints 34 56 67 4 35
    cout<<endl;


    list<double> lst1(5),lst2(4);
    lst1 = {45.54,645.6,45,6,456};
    lst2 = {34.46,456,46.45,46.45,47,78};
    swap(lst1,lst2);
    list<int> lst3 = {345,456,546};

    cout<<"list 1 values after swap: ";
    for(double x : lst1)
        cout<<x<<" ";//prints 34.46 456 46.45 46.45 47 78 
    cout<<endl;
    cout<<"list 2 values after swap: ";
    for(double x : lst2)
        cout<<x<<" "; //prints 45.54 645.6 45 6 456
    cout<<endl;    
    
    return 0;
}

/*

Output:

Vector 1 values before swap: 23 34 67 68 
Vector 2 values before swap: 78 67 745 567 
Vector 1 values after swap: 78 67 745 567 
Vector 2 values after swap: 23 34 67 68 
deque 1 values before swap: 34 56 67 4 35 
deque 2 values before swap: 45 456 45 67 
deque 1 values after swap: 45 456 45 67 
deque 2 values after swap: 34 56 67 4 35 
list 1 values after swap: 34.46 456 46.45 46.45 47 78 
list 2 values after swap: 45.54 645.6 45 6 456 

*/