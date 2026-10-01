#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>

using namespace std;

int main()
{
    array<int,6> arr = {10,234,34,43,5,53};
    int arr_sum = 0;
    for(int i : arr)
    {   
        arr_sum+=i;
    }
    cout<<"Sum of array elements: "<<arr_sum<<endl;  //prints 379
    cout<<"Average of array elements: "<<arr_sum/arr.size()<<endl; //prints 63


    vector<int> vec(5);
    vec = {23,435,33,34,23};
    int vec_sum = 0;
    for(auto it = vec.begin();it != vec.end();it++)
    {
        vec_sum += *it;
    }
    cout<<"Sum of vector elements: "<<vec_sum<<endl; //prints 548
    cout<<"Average of vector elements: "<<vec_sum/vec.size()<<endl; //prints 109

    deque<int> deq = {324,34,65,54};
    int deq_sum = 0;
    for(int x : deq)
    {
        deq_sum += x;
    }
    cout<<"Sum of deque elements: "<<deq_sum<<endl; //prints 477
    cout<<"Average of deque elements: "<<deq_sum/deq.size()<<endl; //prints 119


    list<int> lst(7);
    lst = {10,20,34,34,45,45,38};
    int lst_sum = 0;
    for(int x : lst)
        lst_sum += x;

    cout<<"Sum of elements in list: "<<lst_sum<<endl; //prints 226
    cout<<"Average of list elements: "<<lst_sum/lst.size()<<endl; //prints 32


    return 0;
}