#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    array<int,3> arr1 = {34,345,54};
    array<int,2> arr2 = {55,56};
    array<int,5> arr3;
    
    merge(arr1.begin(),arr1.end(),arr2.begin(),arr2.end(),arr3.begin());

    cout<<"after merging two arrays: ";
    for(int x : arr3)
    {
        cout<<x<<" "; //prints 34 55 56 345 54 
    }
    cout<<endl;

    vector<int> vec,vec_addln,vec_res;
    vec = {34,546,343,45,45};
    vec_addln = {49,546,78,675};

    vec.insert(vec.end(),vec_addln.begin(),vec_addln.end());
        cout<<"Elements inside vector using insert";
    for(int x : vec)
        cout<<x<<" "; //prints 34 546 343 45 45 49 546 78 675 
    cout<<endl;
    sort(vec.begin(),vec.end());
    sort(vec_addln.begin(),vec_addln.end());
    vec_res.resize(vec.size()+vec_addln.size());
    merge(vec.begin(),vec.end(),vec_addln.begin(),vec_addln.end(),vec_res.begin());
    cout<<"Elements inside vector using merge";
    for(int i : vec_res)
        cout<<i<<" "; //prints 34 45 45 49 49 78 78 343 546 546 546 675 675  
    cout<<endl;

    deque<int> deq,deq_addln;
    deq = {55,46,345,423,435,65};
    deq_addln = {34,56,678,88,900};
    deq.insert(deq.end(),deq_addln.begin(),deq_addln.end());
    cout<<"Elements inside deque after insert : ";

    for(int x : deq)
        cout<<x<<" "; //prints 55 46 345 423 435 65 34 56 678 88 900 
    cout<<endl;

    sort(deq.begin(),deq.end());
    sort(deq_addln.begin(),deq_addln.end());
    deq.resize(deq.size() + deq_addln.size());
    merge(deq.begin(),deq.end(),deq_addln.begin(),deq_addln.end(),deq_addln.begin());
    cout<<"Elements inside deque after merge : ";
    for(int i : deq)
        cout<<i<<" ";  //prints 34 46 55 56 65 88 345 423 435 678 900 0 0 0 0 0 
    
    cout<<endl;

    list<int> lst;
    lst = {34,4456,456,45,43,768};
    list<int> lst_addln,lst_res;
    lst_addln = {56,456,76,87,89,89,90};

    lst.insert(lst.end(),lst_addln.begin(),lst_addln.end());

    cout<<"Elements inside list after insert : ";
    for(int i : lst)
        cout<<i<<" "; //prints 34 4456 456 45 43 768 56 456 76 87 89 89 90 

    cout<<endl;

    lst.sort();
    lst_addln.sort();
    merge(lst.begin(),lst.end(),lst_addln.begin(),lst_addln.end(),back_inserter(lst_res));
    cout<<"Elements inside list after merge : ";
    for(int x :lst_res)
        cout<<x<<" "; //prints  34 43 45 56 56 76 76 87 87 89 89 89 89 90 90 456 456 456 768 4456 

    cout<<endl;
    
    return 0;

}