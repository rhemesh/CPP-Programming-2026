#include<iostream>

#include<vector>
#include<deque>
#include<list>

using namespace std;

int main()
{
    vector<int> vec(5) ;
    cout<<"Enter vector elements:";
    for(int i=0;i<vec.size();i++)
        cin>>vec[i];
    
    cout<<endl;
    vec.insert(vec.begin()+3,100); //inserts 100 at 3rd index
    
    cout<<"Elements inside vector:";
    for(int x : vec)
        cout<<x<<" ";

    cout<<endl;
    vec.insert(vec.begin()+2,5,200); //inserts 5 times 200 starts from index 2

    cout<<"Elements inside vector after multiple insertion:";
    for(int x : vec)
        cout<<x<<" ";
    cout<<endl;
    deque<int> deq = {234,435,45,456,456};
    deq.insert(deq.begin()+2,565); //inserts element at index 2
    cout<<"Elements inside deque:";
    for(int x : deq)
        cout<<x<<" ";//prints 234 435 565 45 456 456 

    cout<<endl;
    deq.insert(deq.begin()+1,3,55); //inserts multiple elements starts from index 1

    cout<<"Elements inside deque after multiple insertion:";
    for(int x : deq)
        cout<<x<<" ";//prints 234 55 55 55 435 565 45 456 456 
    cout<<endl;

    list<double> lst = {34.45,645.45,46,54,34};
    lst.insert(lst.end(),34345.45); //insert element at last index
    cout<<"Elements inside list:";
    for(double x : lst)
        cout<<x<<" ";//prints 34.45 645.45 46 54 34 34345.4 

    cout<<endl;
    lst.insert(lst.begin(),2,55.76); //inserts multiple elements starts from index 0

    cout<<"Elements inside list after multiple insertion:";
    for(double x : lst)
        cout<<x<<" ";//prints 55.76 55.76 34.45 645.45 46 54 34 34345.4  
    cout<<endl;

    auto it  = lst.begin();
    it++;  
    lst.insert(it,3546); //Inserting element using iterator to insert at any position 

    cout<<"Inserting element at index 1 :";
    for(double x : lst)
        cout<<x<<" ";//prints 55.76 3546 55.76 34.45 645.45 46 54 34 34345.4  
    cout<<endl;



    return 0;

}

/*

Output:
Enter vector elements:34 546 67 78 45 
Elements inside vector:34 546 67 100 78 45 
Elements inside vector after multiple insertion:34 546 200 200 200 200 200 67 100 78 45 
Elements inside deque:234 435 565 45 456 456 
Elements inside deque after multiple insertion:234 55 55 55 435 565 45 456 456 
Elements inside list:34.45 645.45 46 54 34 34345.4 
Elements inside list after multiple insertion:55.76 55.76 34.45 645.45 46 54 34 34345.4 
Inserting element at index 1 :55.76 3546 55.76 34.45 645.45 46 54 34 34345.4 

*/