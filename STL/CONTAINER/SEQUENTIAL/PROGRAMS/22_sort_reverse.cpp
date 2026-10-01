#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> lst = {345,456,24,354,456,53};
    lst.sort();
    cout<<"After sorting elements inside list are: ";
    for(int l : lst)
        cout<<l<<" "; //prints 24 53 345 354 456 456 
    cout<<endl;

    lst.reverse();
    cout<<"After reversing elements inside list are: ";
    for(int l : lst)
        cout<<l<<" ";//prints 456 456 354 345 53 24 
    cout<<endl;

    return 0;

}