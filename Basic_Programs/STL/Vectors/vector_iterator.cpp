#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec;  //vector declaration with integer data type

    for(int i=0;i<5;i++)
    {
        vec.push_back(i);  //appending to vector
    }
    cout<<"Size of the vector = "<<vec.size()<<endl;

    vector<int>::iterator v = vec.begin();   //creating iterator vector variable and initializing it with the vec first character
    cout<<"Values are : "<<"\n";
    while(v != vec.end())
    {
        //iterators will work as a pointer
        cout<<*v<<" "; //dereferecing the iterator to print the value
        v++; //incrementing the vector iterator 
    }

    return 0;
}

/*

Summary:
using Iterator variables in vector:
vec.begin() will give the first index of the vector
vec.end() will give the last index of the vector
*v dereferencing the vector iterator variable to print the value in that particular index
v++ incrementing the index of the iterator vector
vector<int>::iterator v;  declari ng the iterator of the vector of type int

Output:

Size of the vector = 5
Values are : 
0 1 2 3 4 

*/