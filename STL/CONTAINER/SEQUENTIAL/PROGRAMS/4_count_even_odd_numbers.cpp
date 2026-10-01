#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<algorithm>

#define DEQUE 0

using namespace std;

int main()
{
    vector<int> EvenOddcount(8);   //8 elements to store even odd count of array,vector,deque,list
    array<int,7> arr = {23,45,23,65,44,56,67};
   
    for(int x : arr)
    {
        if(x%2 == 0)
            EvenOddcount[0]++;  //even 2
        else
            EvenOddcount[1]++;  //odd 5
    }
    cout<<"Even elements count in array: "<<EvenOddcount[0]<<endl<<"Odd elements count in array: "<<EvenOddcount[1]<<endl;



    vector<int> vec = {12,343,43,54,5};

    for(int x : vec)
    {
        if(x%2 == 0)
            EvenOddcount[2]++;
        else
            EvenOddcount[3]++;
    }
    cout<<"Even elements count in vector: "<<EvenOddcount[2]<<endl; //prints 2
    cout<<"Odd elements count in vector: "<<EvenOddcount[3]<<endl; //prints 3


#if DEQUE
    deque<int> deq(5);
    cout<<"Enter the elements to the deque: ";
    for(int &x : deq)
        cin>>x;  //inputs 23 435 54 56 45

    for(int x : deq)
    {
        if(x%2 == 0)
            EvenOddcount[4]++;
        else
            EvenOddcount[5]++;
    }
    cout<<"Even elements count in deque: "<<EvenOddcount[4]<<endl;  //prints 2
    cout<<"Odd elements count in deque: "<<EvenOddcount[5]<<endl;  //prints 3
    
   
#endif

    list<int> lst = {23,34,345,456,34};
    lst.push_front(5);
    lst.push_front(2);

     for(int x : lst)
    {
        if(x%2 == 0)
            EvenOddcount[6]++;
        else
            EvenOddcount[7]++;
    }
    cout<<"Even elements count in list: "<<EvenOddcount[6]<<endl;  //prints 4
    cout<<"Odd elements count in list: "<<EvenOddcount[7]<<endl;  //prints 3
    
    return 0;

}



