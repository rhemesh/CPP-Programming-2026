#include<iostream>
#include<vector>
#include<deque>
#include<list>

using namespace std;

int main()
{
    vector<int> vec = {23,5,46,56,657,768};
    cout<<"The elements in vector: "<<endl;
    auto it = vec.begin();
    while(it != vec.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    deque<int> deq = {234,456,567,56,34};
    cout<<"Elements in deque: "<<endl;
    auto deq_it = deq.begin();
    for(deq_it;deq_it!=deq.end();deq_it++)
    {
        cout<<*deq_it<<" ";
    }
    cout<<endl;

    list<int> lst(5);
    cout<<"Enter elements into list:"<<endl;
    for(auto &l : lst)
    {
        cin>>l;
    }

    cout<<"Elements in List: "<<endl;
    auto lst_it = lst.begin();
    while(lst_it != lst.end())
    {
        cout<<*lst_it<<" ";
        lst_it++;
    }


    return 0;
}