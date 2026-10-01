#include<iostream>
#include<vector>
#include<list>
#include<deque>

using namespace std;

int main()
{
    vector<int> vec = {34,6,67,67,44};
    cout<<"vector front:"<<vec.front()<<endl;
    cout<<"vector back: "<<vec.back()<<endl;

    deque<int> deq = {454,56,45,546,546};
    cout<<"deque front:"<<deq.front()<<endl;
    cout<<"deque back: "<<deq.back()<<endl;

    list<int> lst = {56,567,67,67,443};
    cout<<"list front:"<<lst.front()<<endl;
    cout<<"list back: "<<lst.back()<<endl;

    return 0;


}

/*
Output:
vector front:34
vector back: 44
deque front:454
deque back: 546
list front:56
list back: 443
*/