#include<iostream>

#include<list>

using namespace std;

int main()
{
    list<int> lst;
    for(int i=0;i<7;i++)
        lst.push_back(i);
    
    lst.push_front(10);
    lst.push_front(20);
    cout<<"size = "<<lst.size()<<endl;

    list<int>::iterator l; 
    l = lst.begin();
    while(l != lst.end())
    {
        cout<<*l<<" ";
        l++;
    }

    return 0;

}

/*

Summary:
Unlike Queue and Stack in w=List elements can be inserted and removed from any location 
It is a doubly linked list , which knows the previous element address and next element address

Output:
size = 9
20 10 0 1 2 3 4 5 6 

*/