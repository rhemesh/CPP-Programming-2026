#include<iostream>
#include<vector>

using namespace std;

int main()
{
    //capacity gives the total number of elements can fit in vector with no need to resize
    //size gives the total number of elements are present inside the vector
    vector<int> vec;
    vec.push_back(20);
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;
    vec.push_back(10);
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;
    vec.reserve(25);
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;
    vec.push_back(23);
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;
    


}
/*

size: 1          
capacity: 1
size: 2
capacity: 2
size: 2
capacity: 25
size: 3
capacity: 25

*/