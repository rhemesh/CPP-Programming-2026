#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec;  //vector declaration with the type int
    
    cout<<"vector size : "<<vec.size()<<endl;  //0
    int i;
    for(i=0;i<5;i++)
    {
        vec.push_back(i); //it will append to the exixting values
    }
    cout<<"Values are:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<vec[i]<<" ";
    }

    return 0;

}

/*

Summary:
Vector declaration with the integer datatype
and then ppushback - appending the values to the vector

Output:

vector size : 0
Values are:
0 1 2 3 4 

*/