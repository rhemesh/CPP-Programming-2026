#include<iostream>
#include<vector>
#include<deque>
#include<list>

using namespace std;

int main()
{
    vector<int> vec = {23,43,345,35};
    cout<<"Size: "<<vec.size()<<endl; //prints 4
    vec.resize(7); //resizes vector to size 7
    cout<<"Size: "<<vec.size()<<endl; //prints 7
    cout<<"After resizing vector elements are: "<<endl;
    for(int i : vec)
        cout<<i<<" "; //prints 23 43 345 35 0 0 0 
    cout<<endl;
    vec.resize(2); //resizes /shrinks vector to size 2
    cout<<"Size: "<<vec.size()<<endl; //prints 2
    cout<<"After resizing vector elements are: "<<endl;
    for(int i : vec)
        cout<<i<<" "; //prints 23 43
    cout<<endl;

    deque<int> deq = {324,34,34,35};
    deq.resize(3);//deq resizes size to 3 
    cout<<"Size = "<<deq.size()<<endl; //prints 3
    cout<<"Deque elements after resizing: "<<endl;
    for(int x : deq)
        cout<<x<<" ";//prints 324 34 34 
    cout<<endl;
    deq.resize(7); //resizes deq size to 7
    cout<<"Size = "<<deq.size()<<endl; //prints 7
    cout<<"Deque elements after resizing: "<<endl;
    for(int x : deq)
        cout<<x<<" "; //prints 324 34 34 0 0 0 0 
    cout<<endl;

    list<int> lst = {23,435,45};
    lst.resize(5); //resizes list to size 5
    cout<<"Size  = "<<lst.size()<<endl; //prints 5
    cout<<"Elements inside list after resizing: "<<endl;
    for(int x : lst)
        cout<<x<<" "; //prints 23 435 45 0 0
    cout<<endl;
    lst.resize(2);//resizes list to size 2
    cout<<"Elements inside list after resizing: "<<endl;
    for(int x : lst)
        cout<<x<<" ";//23 435
    cout<<endl;

    return 0;
}
/*

Output:
Size: 4
Size: 7
After resizing vector elements are: 
23 43 345 35 0 0 0 
Size: 2
After resizing vector elements are: 
23 43 
Size = 3
Deque elements after resizing: 
324 34 34 
Size = 7
Deque elements after resizing: 
324 34 34 0 0 0 0 
Size  = 5
Elements inside list after resizing: 
23 435 45 0 0 
Elements inside list after resizing: 
23 435 

*/
