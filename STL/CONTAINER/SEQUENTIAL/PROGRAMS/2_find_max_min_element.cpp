#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<algorithm>

#define ARRAY 0
#define DEQUE 0

using namespace std;

int main()
{
#if ARRAY
    array<int,7> arr;
    cout<<"Enter the elements to the array: ";
    for(int &x : arr)
        cin>>x;  //entered 12 24 35 464 34 34 5 
    
    cout<<"front(): "<<arr.front()<<endl; //prints 12
    cout<<"back(): "<<arr.back()<<endl; //prints 5

    auto it_max = max_element(arr.begin(),arr.end());   //Method 1 to find the max element
    cout<<"max element: "<<*it_max<<endl;  //prints 464
   // cout<<*max_element(arr.begin(),arr.end())<<endl; //Method 2 to find the min element
    auto it_min = min_element(arr.begin(),arr.end());   
    cout<<"min element: "<<*it_min<<endl; //prints 5

    cout<<"Difference between max and min element: "<<endl;

    cout<<*it_max - *it_min<<endl; //prints 459

#endif

    vector<int> vec = {12,343,43,54,5};

    cout<<"front(): "<<vec.front()<<endl; //prints 12
    cout<<"back(): "<<vec.back()<<endl; //prints 5

    auto it_vmax = max_element(vec.begin(),vec.end()); 
    auto it_vmin = min_element(vec.begin(),vec.end());
    cout<<"max element: "<<*it_vmax<<endl;  //prints 343
    cout<<"min element: "<<*it_vmin<<endl; //prints 5

    cout<<"Difference between maximum and minimum elements: "; 
    cout<<*it_vmax - *it_vmin<<endl; //prints difference - value 338


#if DEQUE
    deque<int> deq(5);
    cout<<"Enter the elements to the deque: ";
    for(int &x : deq)
        cin>>x;
    
    cout<<"front(): "<<deq.front()<<endl;
    cout<<"back(): "<<deq.back()<<endl;

    auto it_dmax = max_element(deq.begin(),deq.end());
    auto it_dmin = min_element(deq.begin(),deq.end());
    cout<<"max element: "<<*it_dmax<<"\n"<<"min element: "<<*it_dmin<<endl;
    cout<<"Difference between maximum element and minimum element: ";
    cout<<*it_dmax - *it_dmin<<endl;
#endif

    list<int> lst = {23,34,345,456,34};
    lst.push_front(5);
    lst.push_front(2);

    cout<<"front() : "<<lst.front()<<endl;
    cout<<"back() : "<<lst.back()<<endl;

    auto it_lmax = max_element(lst.begin(),lst.end());
    auto it_lmin = min_element(lst.begin(),lst.end());

    cout<<"maximum element: "<<*it_lmax<<endl<<"minimum element: "<<*it_lmin<<endl;
    cout<<"Difference between maximum element and minimum element: "<<*it_lmax - *it_lmin<<endl;
    
    return 0;

}



