#include<iostream>
#include<vector>
#include<deque>
#include<list>

using namespace std;

int main()
{
    vector<int> vec = {234,345,345,32,34,325};
    cout<<"Size of the vector:"<<vec.size()<<endl; //prints 6
    cout<<"Elements inside vector are: ";
    for(int t : vec)
        cout<<t<<" ";//prints 234,345,345,32,34,325
    cout<<endl;
    vec.clear(); //It clear the vector - all the elements inside vector
    cout<<"Size of the vector:"<<vec.size()<<endl; //prints 0
    if(vec.empty()) //It is true because vector is empty
        cout<<"Vector is empty"<<endl;
    else  
        cout<<"Vector is not empty"<<endl;

    deque<int> deq = {345,4,45456,35343,3};
    cout<<"Size of the deque:"<<deq.size()<<endl;//prints 5
    cout<<"Elements inside deque are: ";
    for(int t : deq)
        cout<<t<<" "; //prints 345 4 45456 35343 3 
    cout<<endl;
    deq.clear(); //It clear the deque - all the elements
    cout<<"Size of the deque:"<<deq.size()<<endl;
    if(deq.empty()) //It is true because deque is empty
        cout<<"deque is empty"<<endl;
    else  
        cout<<"deque is not empty"<<endl;

    list<int> lst = {345,56,34,46,778,8,67};
    cout<<"Size of the list:"<<lst.size()<<endl;//prints 7
    cout<<"Elements inside list are: ";
    for(int t : lst)
        cout<<t<<" "; //prints 345 56 34 46 778 8 67 
    cout<<endl;
    lst.clear(); //It clear the list - all the elements
    cout<<"Size of the list:"<<deq.size()<<endl;
    if(lst.empty()) //It is true because list is empty
        cout<<"list is empty"<<endl;
    else  
        cout<<"list is not empty"<<endl;

    return 0;

}

/*

Output:
Size of the vector:6
Elements inside vector are: 234 345 345 32 34 325 
Size of the vector:0
Vector is empty
Size of the deque:5
Elements inside deque are: 345 4 45456 35343 3 
Size of the deque:0
deque is empty
Size of the list:7
Elements inside list are: 345 56 34 46 778 8 67 
Size of the list:0
list is empty

*/