#include<iostream>
#include<deque>

using namespace std;

int main()
{
    //constructors
   // deque<int> deq; //default constructor
    //deque<int> deq(7); //creates deque with given size output: 0 0 0 0 0 0 0
    //deque<int> deq(4,100); //size with value output:100 100 100 100
    deque<int> deq = {10,20,30}; //Initialize with values Output:10 20 30
    deque<int> deq1(deq); //copying elements from deque to deque Output:deq1 = 10 20 30 

    //Modifier functions
    deq.push_back(40); //adds at back 10 20 30 40
    deq.push_back(50); //adda at back 10 20 30 40 50
    deq.push_front(2); //adds element at front 2 10 20 30 40 50
    deq.push_front(1); //adds element at front 1 2 10 20 30 40 50
    deq.pop_back(); //removes element 50 from back 1 2 10 20 30 40
    deq.pop_front();//removes element 1 from front 2 10 20 30 40

    deq.insert(deq.begin() +2,2000); //Inserting element at any position - index 2  - 2 10 2000 20 30 40

    deq.insert(deq.begin(),4,1000); //Inserting multiple elements 1000 1000 1000 1000 2 10 2000 20 30 40

    deq.erase(deq.begin(),deq.begin()+4); //removing multiple elements by range - 2 10 2000 20 30 40
    
    deq.erase(deq.end()-4); //removing element at particular index - removes 2000 - 2 10 20 30 40
    cout<<"Elements are: ";
    for(int i : deq)
    {
        cout<<i<<" ";  //2 10 20 30 40
    }
    cout<<endl;

    //Accessing elements
    cout<<"deq[1]: "<<deq[1]<<endl; //prints 10
    cout<<"deq.at(2): "<<deq.at(2)<<endl; //prints 20
    cout<<"deq.front(): "<<deq.front()<<endl; //prints 2 
    cout<<"deq.back(): "<<deq.back()<<endl; //prints 40

    //Size and capacity
    cout<<"deq.size: "<<deq.size()<<endl; //prints 5
    cout<<"deq.empty: "<<deq.empty()<<endl; //prints 0 because deque is not empty
    cout<<"deq.maxsize: "<<deq.max_size()<<endl;

    //Note:deque doesn't provide capacity,reverse,and data functions
    //Because internally deque is not stored as one continious memory block

    //Iterator functions - Iterators are used for traverse deque
    cout<<"Elements printing using deq.begin() and deq.end(): ";
    auto it = deq.begin();  //assigned with first element
    for(it;it != deq.end();it++)
    {
        cout<<*it<<" "; //2 10 20 30 40
    }
    cout<<endl;

    //reverse begin and reverse end
    cout<<"Elements printing using rbegin() and rend(): ";
    for(auto it = deq.rbegin();it!=deq.rend();it++)//prints elements in a reverse order
    {
        *it = *it + 100;  // adds 100 to the each element 
        cout<<*it<<" "; //140 130 120 110 102
    }
    cout<<endl;

    //constant begin and constant end
    cout<<"Elements printing using cbegin() and cend(): ";
    for(auto it = deq.cbegin();it!=deq.cend();it++)  //prints values from 1st to last
    {
        //*it = *it +5; //deque values cannot be modified because it is constant
        cout<<*it<<" "; //102 110 120 130 140
    }
    cout<<endl;

    return 0;
}


/*
Output:

Elements are: 2 10 20 30 40 
deq[1]: 10
deq.at(2): 20
deq.front(): 2
deq.back(): 40
deq.size: 5
deq.empty: 0
deq.maxsize: 2305843009213693951
Elements printing using deq.begin() and deq.end(): 2 10 20 30 40 
Elements printing using rbegin() and rend(): 140 130 120 110 102 
Elements printing using cbegin() and cend(): 102 110 120 130 140 


*/