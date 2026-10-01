#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>

#include<algorithm>

using namespace std;

int main()
{
    array<int,6> arr = {10,234,34,43,5,53};
    int arr_key = 43;
    bool arr_key_found = false;
    for(int i=0;i< arr.size();i++)
    {   
        if(arr[i] == arr_key)
        {
            arr_key_found = true;
            cout<<"Key found at index "<<i<<endl;
            break;
        }
    }
    if(!arr_key_found)
        cout<<"Key not found in array"<<endl;
   


    vector<int> vec(5);
    vec = {23,435,33,34,23};
    int vec_key = 33;

    auto it = find(vec.begin(),vec.end(),vec_key);  //find will be in algorithm which returns the iterator
    if(it != vec.end())
        cout<<"Key found at index "<<it - vec.begin()<<endl; //finding index
    else
        cout<<"key not found in vector"<<endl;
    

    deque<int> deq = {324,34,65,54};
    int deq_key = 65;
    
    auto deq_it = find(deq.begin(),deq.end(),deq_key);
    if(deq_it != deq.end())
    {
        cout<<"Key found at index "<<deq_it - deq.begin()<<endl;
    }
    else
    {
        cout<<"Key not found in deque"<<endl;
    }
   


    list<int> lst(7);
    lst = {10,20,34,34,45,45,38};
    int lst_key = 20;
    bool list_key_found = false;
    for(int i=0;i<= lst.size();i++)
    {
        if(i == lst_key)
        {
            list_key_found = true;
            cout<<"Key found at index "<<i<<endl;
            break;
        }
    }

    if(!list_key_found)
        cout<<"Key not found in list"<<endl;

    return 0;
}

/*

Output:

Key found at index 3
Key found at index 2
Key found at index 2
Key not found in list

*/