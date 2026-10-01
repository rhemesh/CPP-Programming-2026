#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>

using namespace std;
int odd(int x)
{
    return x%2!=0;
}
int main()
{
    array<int,7> arr = {12,34,23,5,46,65,55};
    if(arr.empty())
        cout<<"Array is empty"<<endl;
    else
        cout<<"Array is not empty"<<endl;

    //removing element manually
    int pos = 2; //to remove 
    for(int i = pos;i<arr.size()- 1;i++)
    {
        arr[i] = arr[i+1]; //removed 23 from index 2
    }
    cout<<"After removing element from array the remaining are:";
    for(int x : arr)
        cout<<x<<" ";

    cout<<endl;



    vector<int> vec(5);
    vec = {23,89,67,45,78,654};

    vec.pop_back(); //removing last element - 654
    vec.erase(vec.begin()+1); //removes 1st index
    cout<<"total size of vector after removing elements is: "<<vec.size()<<endl;
    cout<<"Elements remaining after removing elements from vector: ";
    for(int i : vec)
        cout<<i<<" "; //prints 23 67 45 78 
    
    vec.clear();  //removes all the elements inside vector
    cout<<endl;
    if(vec.empty())
        cout<<"Vector is empty"<<endl;  //prints empty
    else    
        cout<<"Vector is not empty"<<endl;




    deque<int> deq = {12,34,345,54,65};
    
    deq.pop_back();  //removes last element - 65
    deq.pop_front(); //emoves front element - 12

    deq.erase(deq.end()-2); //removes last to 2nd index
    cout<<"total size of deque after removing elements is: "<<deq.size()<<endl; //prints size 2
    cout<<"Elements remaining after removing elements from deque: ";
    for(int i : deq)
        cout<<i<<" "; //prints  34 54 
    
    deq.clear();  //removes all the elements inside deque
    cout<<endl;
    if(deq.empty())
        cout<<"deque is empty"<<endl;  //prints empty
    else    
        cout<<"deque is not empty"<<endl;

    

    list<int> lst;
    lst = {23,34,345,546,34,43};

    lst.pop_back();  //removes last element - 43
    lst.pop_front(); //removes first element - 23

    lst.remove(34); //removes particular element - 34, 34 from 2 places
    lst.remove_if(odd); //removes odd elements inside the list - 345 43

    cout<<"Size of list: "<<lst.size()<<endl; //1 - 546
    cout<<"Remaining Elements after removing:"<<endl;
    for(int x: lst)
        cout<<x<<" "; //prints 546
    cout<<endl;
    lst.erase(lst.begin());  //removes 1st index element - 546
    if(lst.empty())  //prints list empty
    {
        cout<<"List is empty"<<endl;
    }
    else 
        cout<<"List is not empty"<<endl;
    
    return 0;
}

/*
Output:
Array is not empty
After removing element from array the remaining are:12 34 5 46 65 55 55 
total size of vector after removing elements is: 4
Elements remaining after removing elements from vector: 23 67 45 78 
Vector is empty
total size of deque after removing elements is: 2
Elements remaining after removing elements from deque: 34 54 
deque is empty
Size of list: 1
Remaining Elements after removing:
546 
List is empty
*/