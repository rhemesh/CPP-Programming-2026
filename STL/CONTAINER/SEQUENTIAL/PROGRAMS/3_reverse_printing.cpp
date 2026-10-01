#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<algorithm>

#define ARRAY 0
#define DEQUE 0

using namespace std;

int main()
{
#if ARRAY
    array<int,7> arr;
    cout<<"Enter the elements to the array: ";
    for(int &x : arr)
        cin>>x;  //entered 12 24 35 464 34 34 5 
    
    cout<<"Reverse printing of elements in array: ";
    for(auto it = arr.rbegin();it != arr.rend();it++)
        cout<<*it<<" ";
    
        cout<<endl;

#endif

    vector<int> vec = {12,343,43,54,5};

    cout<<"Reverse printing of elements in vector: ";
    for(auto it = vec.rbegin();it != vec.rend();it++)
        cout<<*it<<" ";  //prints  5 54 43 343 12 
    
        cout<<endl;


#if DEQUE
    deque<int> deq(5);
    cout<<"Enter the elements to the deque: ";
    for(int &x : deq)
        cin>>x;

    cout<<"Reverse printing of elements in deque: ";
    for(auto it = deq.rbegin();it != deq.rend();it++)
        cout<<*it<<" ";
    
        cout<<endl;
    
   
#endif

    list<int> lst = {23,34,345,456,34};
    lst.push_front(5);
    lst.push_front(2);

    cout<<"Reverse printing of elements in list: ";
    for(auto it = lst.rbegin();it != lst.rend();it++)
        cout<<*it<<" ";  //prints 34 456 345 34 23 5 2 
    
        cout<<endl;
    
    return 0;

}



