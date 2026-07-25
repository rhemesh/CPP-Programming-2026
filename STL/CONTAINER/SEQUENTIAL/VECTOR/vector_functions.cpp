#include<iostream>

#include<vector>

using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(10);  //10
    vec.push_back(20);  //10 20
    vec.push_back(30);  //10 20 30

    vec.pop_back();    //last element is removed 30  - 10 20
    for(int i=0;i<4;i++)
    {
        vec.push_back(i);   //appended 0 1 2 3  - 10 20 0 1 2 3
    }

    for(int i=0;i<vec.size();i++)  //vec.size() will give value as total number of elements present - 6
    {
        cout<<vec[i]<<" ";  //10 20 0 1 2 3
    }
    cout<<endl;
    
    cout<<vec.front()<<endl;  //prints front element - 10 
    cout<<vec.back()<<endl;   //prints last element - 3
    cout<<vec.at(4)<<endl;    //prints element at particular index - 2
    vec.pop_back();           //removes  value 3 
    
    while(!vec.empty())  //checks whether vector is empty or not - if empty returns 1 or else returns 0
    {
        cout<<"removed "<<vec.back()<<endl;  //prints 2,1,0,20,10
        vec.pop_back();//removed 2,1,0,20,10
    }
    cout<<"size : "<<vec.size()<<endl; //prints size as 0

    return 0;

}

/*

Summary:

Function	Description
push_back(x)	Add element at end
pop_back()	Remove last element
size()	Number of elements
empty()	Checks if vector is empty
front()	First element
back()	Last element
clear()	Removes all elements
at(index)	Safe access

Output:

10 20 0 1 2 3 
10
3
2
removed 2
removed 1
removed 0
removed 20
removed 10
size : 0


*/