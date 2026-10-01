#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<algorithm>

#define VECTOR 0
using namespace std;

int main()
{
    array<int,7> arr = {45,64,55,345,34,32,55};
    sort(arr.begin(),arr.end());  //removes duplicate element only when it is adjacent each other
    auto it = unique(arr.begin(),arr.end());
    int n = it - arr.begin();
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";  //prints 32 34 45 55 64 345 

    cout<<endl;

#if VECTOR

    vector<int> vec(7);
    cout<<"enter the elements to store in vector: ";
    for(int &x : vec)
    {
        cin>>x; //34 45 45 34 25 67 34 
    }
    sort(vec.begin(),vec.end());
    auto vec_it = unique(vec.begin(),vec.end());
    vec.erase(vec_it,vec.end());
    cout<<"Vector elements after removing duplicates: ";
    for(int x : vec)
        cout<<x<<" "; //prints 25 34 45 67 
    cout<<endl;

#endif
    deque<int> deq = {32,34,34,23,34,34,43,67};

    sort(deq.begin(),deq.end());
    auto deq_it = unique(deq.begin(),deq.end());
    deq.erase(deq_it,deq.end());
    cout<<"Deque elements after removing duplicates: ";
    for(int x : deq)
        cout<<x<<" "; //prints 23 32 34 43 67 
    cout<<endl;

    list<int> lst;
    lst = {34,3,34,3,43,46,43,55};
    lst.sort();
    lst.unique();
    cout<<"Elements inside list after removal of duplicates : ";
    for(int x : lst)
        cout<<x<<" "; //prints 3 34 43 46 55 
    cout<<endl;


}