#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> lst = {34,456,56,657,567,45,45,78,45};
    lst.unique(); //removes extra repeated adjacent values - 45 (duplicates)
    lst.remove(45); //removes the number 45 from list
    cout<<"after unique and removing functions list elements are: ";
    for(int l : lst)
        cout<<l<<" ";//prints 34 456 56 657 567 78 

    return 0;
    
}