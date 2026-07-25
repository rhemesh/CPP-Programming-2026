#include<iostream>
#include<array>  //stl array header

using namespace std;

int main()
{
    array<int , 5> arr = {10,20,30,40,50};   //declare array with the fixed size

    for(int i=0;i<arr.size();i++)   //arr.size() gives the total size of the array
    {
        cout<<arr[i]<<" ";    //prints 10 20 30 40 50
    }
    cout<<"\n";

    cout<<"First element: "<<arr.front()<<endl;   //10
    cout<<"Last element: "<<arr.back()<<endl;  //50
    cout<<"Size: "<<arr.size()<<endl;; //5
    cout<<"Accesses element with bound checking: "<<arr.at(3)<<endl;; //prints the element present in particular index
    array<int,5> arr2 = {100,200,300,400,500};  //arr2 stores 100 200 300 400 500
    arr.fill(5);    // fills whole arr as 5 - 5 5 5 5 5 
    for(int i=0;i<arr.size();i++)   
    {
        cout<<arr[i]<<" ";   //prints 5 5 5 5 5 
    }
    cout<<"\n";
    swap(arr2,arr);     //swaps the array - elements of arr will be swapped to arr2 and vis a versa
    cout<<"arr elements are:"<<endl;
    for(int i=0;i<arr.size();i++)   
    {
        cout<<arr[i]<<" ";  //prints 100 200 300 400 500
    }
    cout<<"\n";

    cout<<"arr2 elements are:"<<endl;
    for(int i=0;i<arr2.size();i++)   //arr2.size() - gives the number of elements present in arr2
    {
        cout<<arr2[i]<<" ";  // prints 5 5 5 5 5 
    }
    cout<<"\n";



    return 0;

}

/*
arr.size() - will give the number of elements 


Output:
10 20 30 40 50 
First element: 10
Last element: 50
Size: 5
Accesses element with bound checking: 40
5 5 5 5 5 
arr elements are:
100 200 300 400 500 
arr2 elements are:
5 5 5 5 5 
*/