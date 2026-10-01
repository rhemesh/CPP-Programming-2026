#include<iostream>
#include<vector>
#include<deque>
#include<list>

using namespace std;

int main()
{
    vector<int> vec = {45,546,56,56,4,546};
    cout<<"vector at[4]: "<<vec.at(4)<<endl; //prints 4

    deque<char> deq = {'a','g','t','r','r','7','&'};
    cout<<"deque at[0]: "<<deq.at(0)<<endl;//prints a

    list<string> lst = {"HI","This","is","C++","Code"};
    auto it = lst.begin();
    it++;
    it++;
    it++;
    cout<<"list at[3]: "<<*it<<endl;//prints C++

    return 0;

}