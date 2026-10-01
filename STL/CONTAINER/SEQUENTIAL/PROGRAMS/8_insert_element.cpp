#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>

using namespace std;

int main()
{

    array<int,7> arr = {23,3445,34,46,3,65,67};
    int n = 5;
    int pos = 2;
    for(int i=n;i>pos;i--)
    {
        arr[i] = arr[i-1]; //shifting elements
    }
    arr[pos] = 20;  //adds element at index 2 in array
    n++;
    cout<<"Elements in array: ";
    for(int x :arr)
        cout<<x<<" "; //prints 23 3445 20 34 46 3 67 
    cout<<endl;

    vector<int> vec(5);
    vec = {34,35,23,54,32};
    vec.insert(vec.begin()+3,5); //Inserting 1 element at index 3
    vec.insert(vec.begin()+1,5,200); //Inserting multiple elements
    //index,number of copies,value to be inserted
    vec.emplace(vec.begin()+2,100); //emplace can only insert 1 element at a time
    cout<<"Elements in vector:";
    for(int i : vec)
        cout<<i<<" "; //prints 34 200 100 200 200 200 200 35 23 5 54 32
    cout<<endl;

    deque<int> deq;
    deq = {12,234,43,5,65,67};
    deq.insert(deq.begin()+4,500); //inserts 500 at index 4 
    deq.insert(deq.begin(),5,701); //inserts 701 5 times starting at index 0  - 4

    deq.emplace(deq.begin(),5); //emplaces 5 at start of the deque
    deq.emplace(deq.end(),2); //emplace 2 at end of the deque

    cout<<"Elements inside deque are: ";
    for(int x : deq)
    {
        cout<<x<<" "; //prints 5 701 701 701 701 701 12 234 43 5 500 65 67 2 
    }

    cout<<"\n";


    list<int> lst;

    lst = {44,34,45,456,34,23,57,324};

    lst.insert(lst.begin(),40);  //inserts at start
    lst.insert(lst.end(),2,24); //inserts at start
    //In list we can insert elements at start and end without iteration.
    auto it = lst.begin();
    it++;       //for list we cannot insert directly at any index to insert we need iteration 
    lst.insert(it,504); 
    lst.insert(it,5,455);

    cout<<"Elements in list are: ";
    for(int j : lst)
        cout<<j<<" ";  //prints 40 504 455 455 455 455 455 44 34 45 456 34 23 57 324 24 24 

    cout<<endl;

    return 0;

}

