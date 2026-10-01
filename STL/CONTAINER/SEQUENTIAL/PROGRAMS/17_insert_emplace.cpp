#include<iostream>
#include<vector>
#include<deque>
#include<list>

using namespace std;

int main()
{
    vector<int> vec(5);
    cout<<"Enter elements to vector:";
    for(int i=0;i<5;i++)
        cin>>vec[i];

    vec.insert(vec.begin(),23);
    vec.emplace(vec.begin(),25);
    vec.insert(vec.begin()+3,45);
    vec.insert(vec.end()-3,56);
    vec.emplace(vec.begin()+4,55);
    vec.emplace(vec.end()-2,565);

    cout<<"Vector elements are:";
    for(int  v: vec)
        cout<<v<<" ";
    cout<<endl;

    deque<int> deq = {45,56,567,546,45,567};

    deq.insert(deq.begin()+2,45);
    deq.emplace(deq.begin()+3,657);
    deq.insert(deq.end()-4,56567);
    deq.emplace(deq.end()-2,4546);

    cout<<"Deque elements are: ";
    for(int d : deq)
        cout<<d<<" ";
    cout<<endl;

    list<int> lst = {436, 567, 57, 677, 745};

    lst.insert(lst.begin(),56);
    lst.emplace(lst.begin(),67);
    //In list we cannot use lst.begin()-2 
    lst.insert(lst.end(),56666);
    lst.emplace(lst.end(),455678);

    cout<<"List elements are: ";

    for(int l : lst)
        cout<<l<<" ";

    return 0;
    
}

/*

Output:
Enter elements to vector:345 546 46 34 456
Vector elements are:25 23 345 45 55 546 56 46 565 34 456 
Deque elements are: 45 56 45 657 56567 567 546 4546 45 567 
List elements are: 67 56 436 567 57 677 745 56666 455678 

*/