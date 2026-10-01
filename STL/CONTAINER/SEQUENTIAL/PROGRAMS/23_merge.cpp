#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    list<int> lst1 = {23,435,5,456,46};
    list<int> lst2 = {45,56,567,56};
    //Method 1 using list::merge();  - This will empty the second list
    lst1.sort();
    lst2.sort();
    lst1.merge(lst2);
    cout<<"lst1 size: "<<lst1.size()<<" lst2 size: "<<lst2.size()<<endl;
    cout<<"List of elements after merging two lists: ";
    for(int l : lst1)
        cout<<l<<" ";//prints 5 23 45 46 56 56 435 456 567 
    cout<<endl;
    //Method 2 using STL general algorithm std::merge();  -This will not ,empty the lists
    list<int> lst_1 = {34,546,345,3};
    list<int> lst_2 = {45,567,43,657};
    list<int> lst_3;
    lst_1.sort();
    lst_2.sort();

    merge(lst_1.begin(),lst_1.end(),lst_2.begin(),lst_2.end(),back_inserter(lst_3));
    cout<<"lst_1 size: "<<lst_1.size()<<" lst_2 size: "<<lst_2.size()<<" lst_3 size: "<<lst_3.size()<<endl;

    cout<<"After doing algorithm merge ,Elements inside list are:";
    for(int l : lst_3)
        cout<<l<<" ";//prints 3 34 43 45 345 546 567 657 
    cout<<endl;
    return 0;
}

/*

Output:
lst1 size: 9 lst2 size: 0
List of elements after merging two lists: 5 23 45 46 56 56 435 456 567 
lst_1 size: 4 lst_2 size: 4 lst_3 size: 8
After doing algorithm merge ,Elements inside list are:3 34 43 45 345 546 567 657 

*/