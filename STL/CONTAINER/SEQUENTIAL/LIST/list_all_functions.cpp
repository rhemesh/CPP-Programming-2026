#include<iostream>
#include<list>

using namespace std;

int even(int i)
{
    return i%2 == 0;
}


int main()
{
    //Constructor
    // list<int> lst; //empty list
    // cout<<"Size of list : "<<lst.size()<<endl; //prints 0
    // list<int> lst(7);//Size constructor
    // for(int x : lst)
    // {
    //     cout<<x<<" ";  //prints 0 0 0 0 0 0 0 
    // }
    // cout<<endl;

    // list<int> lst(5,1000); //size and value
    // //-Assigning 5 indeces with value 1000
    // for(int x : lst)
    // {
    //     cout<<x<<" "; //prints 1000 1000 1000 1000 1000 
    // }
    // cout<<endl; 

    list<int> lst = {120,234,2423};//Initialized list
    for(int x : lst)
    {
        cout<<x<<" "; //prints 120 234 2423 
    }
    cout<<endl; 

    //Element access
    //unlike vector list has only front() and back()

    cout<<"lst.front() : "<<lst.front()<<endl; //prints 120
    cout<<"lst.back() : "<<lst.back()<<endl; //prints 2423

    //In list lst[2] cannot be accessed 
    //In linked list it cannot directly jump to third element it should traverse node by node

    //Capacity functions

    cout<<"lst.size(): "<<lst.size()<<endl;  //prints 3

    cout<<"Checking whether lst is empty or not using lst.empty()"<<endl;
    if(lst.empty())
        cout<<"Empty"<<endl;
    else    
        cout<<"Not empty"<<endl;  //prints Not empty because list is not empty
    
    cout<<"lst.max_size(): "<<lst.max_size()<<endl; //prints  384307168202282325 - max number of elements the list could hold


    //Modifiers
    cout<<"lst.push_back(): "<<endl;
    lst.push_back(10);  //120 234 2423 10
    lst.push_back(20); //120 234 2423 10 20 
    cout<<"List of elements are: ";
    for(int x : lst)
        cout<<x<<" "; //prints 120 234 2423 10 20 
    cout<<endl;
    cout<<"lst.push_front(): "<<endl;
    lst.push_front(100);    //100 120 234 2423 10 20 
    lst.push_front(200);    //200 100 120 234 2423 10 20 
     cout<<"List of elements are: ";
    for(int x : lst)
        cout<<x<<" ";  //prints 200 100 120 234 2423 10 20 
    cout<<endl;

    cout<<"lst.pop_back():"<<endl;
    lst.pop_back();  //removes elements from backside - removed 20

    cout<<"lst.pop_front():"<<endl;
    lst.pop_front();  //removes elements from front - removed 200

    for(int x : lst)
        cout<<x<<" ";  //prints  100 120 234 2423 10  
    cout<<endl;

    cout<<"lst.insert(): "<<endl;
    auto it = lst.begin();
    it++;
    lst.insert(it,20);  //To insert element to the third place other than last and front we should use iterator

     for(int x : lst)
        cout<<x<<" ";  //prints  100 20 120 234 2423 10  - inserts value 20 at index 1
    cout<<endl;

    cout<<"lst.erase(): "<<endl;
    auto ite = lst.begin();  
    ite++;  //begin+1
    ite++;  //begin+2
    lst.erase(ite);  //To erase element to the third place other than last and front we should use iterator

     for(int x : lst)
        cout<<x<<" ";  //prints  100 20 234 2423 10 - erases index 2 - value 120  
    cout<<endl;

    // cout<<"lst.clear() : "<<endl;
    // lst.clear();  //clear full list 
    // cout<<"Size() = "<<lst.size()<<endl;  //prints 0

    cout<<"lst.resize() : "<<endl;
    lst.resize(10);  //resises list to 10 elements
    cout<<"size  = "<<lst.size()<<endl;
    for(int x : lst)
    {
        cout<<x<<" "; //prints 100 20 234 2423 10 0 0 0 0 0
    }
    cout<<endl;

    list<int> a(3); //creating list a with the size 3
   // lst.swap(a); //swapping two list elements
    cout<<"After swapping list a elements : "<<endl;
    for(int x : a)
        cout<<x<<" ";  //prints 100 20 234 2423 10 0 0 0 0 0 
    cout<<endl;
    cout<<"After swapping list lst elements : "<<endl;
    for(int x : lst)
        cout<<x<<" "; //prints 0 0 0 
    cout<<endl;

    //lst.assign(1,100);  //assign will update the size and store the number
    // for(int x : lst)
    //     cout<<x<<" "; //prints 100
    // cout<<endl;

    cout<<"lst.emplace_front(): "<<endl;
    lst.emplace_front(12);
    lst.emplace_front(23);
    for(int x : lst)
        cout<<x<<" "; //prints 23 12 100 20 234 2423 10 0 0 0 0 0 
    cout<<endl;

    cout<<"lst.emplace_back(): "<<endl;
    lst.emplace_back(234);
    lst.emplace_back(464);
    for(int x : lst)
        cout<<x<<" "; //prints 23 12 100 20 234 2423 10 0 0 0 0 0 234 464
    cout<<endl;

    cout<<"lst.emplace() : "<<endl;
    auto em_it = lst.begin();
    em_it++;
    lst.emplace(em_it,565);   //adding element on particular index
    for(int x : lst)
        cout<<x<<" "; //prints 23 565 12 100 20 234 2423 10 0 0 0 0 0 234 464
    cout<<endl;

    //Special List functions

    cout<<"lat.remove() : "<<endl;
    lst.remove(12);  //removes the element 12 from the list
    for(int i : lst)
        cout<<i<<" "; //prints 23 565 100 20 234 2423 10 0 0 0 0 0 234 464 
    cout<<endl;

    cout<<"lst.remove_if() : "<<endl;
    lst.remove_if(even); //calls the function and checks for a condition
    for(int i : lst)
        cout<<i<<" "; //prints 23 565 2423  
    cout<<endl;
    cout<<"Elements in List: "<<endl;
    lst.emplace_back(10);
    lst.emplace_back(10);
    lst.push_front(20);
    lst.push_front(21);
    lst.push_front(20);
    for(int i : lst)
        cout<<i<<" "; //prints 20 21 20 23 565 2423 10 10  
    cout<<endl;

    cout<<"lst.unique() : "<<endl;
    lst.unique(); //removes consecutive elements with same value
    for(int i : lst)
        cout<<i<<" "; //prints 20 21 20 23 565 2423 10 
    cout<<endl;

    cout<<"lst.sort():"<<endl;
    lst.sort();  //sorting the elements in ascending order
    for(int i : lst)
        cout<<i<<" "; //prints 10 20 20 21 23 565 2423 
    cout<<endl;

    cout<<"lst.reverse():"<<endl;
    lst.reverse();  //sorting the elements in descending order
    for(int i : lst)
        cout<<i<<" "; //prints 2423 565 23 21 20 20 10
    cout<<endl;

    a.push_back(30);
    a.push_front(50);
    cout<<"lst.reverse():"<<endl;
    lst.merge(a);  //merging elements of lst and a list 
    //a = 50 0 0 0 30
    for(int i : lst)
        cout<<i<<" "; //prints 50 0 0 0 30 2423 565 23 21 20 20 10 
    cout<<endl;

    cout<<"lst.splice() : "<<endl;
    lst.splice(lst.end(),a);  //moves elements from list a to list lst without copying
    for(int i : lst)
        cout<<i<<" "; //prints 50 0 0 0 30 2423 565 23 21 20 20 10 
    cout<<endl;

    cout<<"size of a list  = "<<a.size()<<endl; //prints 0

    //Iterators

    for(auto it  = lst.begin();it!= lst.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;

}

/*

Output:

120 234 2423 
lst.front() : 120
lst.back() : 2423
lst.size(): 3
Checking whether lst is empty or not using lst.empty()
Not empty
lst.max_size(): 384307168202282325
lst.push_back(): 
List of elements are: 120 234 2423 10 20 
lst.push_front(): 
List of elements are: 200 100 120 234 2423 10 20 
lst.pop_back():
lst.pop_front():
100 120 234 2423 10 
lst.insert(): 
100 20 120 234 2423 10 
lst.erase(): 
100 20 234 2423 10 
lst.resize() : 
size  = 10
100 20 234 2423 10 0 0 0 0 0 
After swapping list a elements : 
0 0 0 
After swapping list lst elements : 
100 20 234 2423 10 0 0 0 0 0 
lst.emplace_front(): 
23 12 100 20 234 2423 10 0 0 0 0 0 
lst.emplace_back(): 
23 12 100 20 234 2423 10 0 0 0 0 0 234 464 
lst.emplace() : 
23 565 12 100 20 234 2423 10 0 0 0 0 0 234 464 
lat.remove() : 
23 565 100 20 234 2423 10 0 0 0 0 0 234 464 
lst.remove_if() : 
23 565 2423 
Elements in List: 
20 21 20 23 565 2423 10 10 
lst.unique() : 
20 21 20 23 565 2423 10 
lst.sort():
10 20 20 21 23 565 2423 
lst.reverse():
2423 565 23 21 20 20 10 
lst.reverse():
50 0 0 0 30 2423 565 23 21 20 20 10 
lst.splice() : 
50 0 0 0 30 2423 565 23 21 20 20 10 
size of a list  = 0
50 0 0 0 30 2423 565 23 21 20 20 10 

*/