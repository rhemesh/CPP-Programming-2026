#include<iostream>

#include<vector>
#include<deque>
#include<list>
using namespace std;

int main()
{
    vector<int> vec = {234,54,5,45,34};
    vec.erase(vec.begin()); //removes first element from the vector - 234
    vec.erase(vec.begin()+2);//removes 2md index element - 45
    cout<<"Elements inside vector after usage of erase:";
    for(int x : vec)
        cout<<x<<" ";//prints 54 5 34 
    cout<<endl;

    deque<int> deq;
    deq = {34,45,657,678,443};
    deq.erase(deq.end() - 1); //removes last element inside deque - 443
    deq.erase(deq.begin()+3);//removes element at third index - 678
    cout<<"Elements inside deque after usage of erase:";
    for(int x : deq)
        cout<<x<<" ";//prints 34 45 657 
    cout<<endl;

    list<int> lst;
    lst = {345,456,34,56,567,345};
    lst.erase(lst.begin());//removes first element from the list - 345
    //List can only support lst.begin iside erase we cannot use lst.begin() + 2
    //Instead we can utilize the iterators 
    auto it = lst.begin();
    it++;
    it++;
    lst.erase(it);//removes element from index 2 - 56
    //using advance can also be done
    auto it_ad = lst.begin();
    advance(it_ad,2); //Iterates to index 2
    lst.erase(it_ad); //removes element at index 2 - 567

    cout<<"Elements inside list after usage of erase:";
    for(int x : lst)
        cout<<x<<" ";//prints 456 34 345 
    cout<<endl;

    return 0;

}

/*

Output:

Elements inside vector after usage of erase:54 5 34 
Elements inside deque after usage of erase:34 45 657 
Elements inside list after usage of erase:456 34 345 

*/