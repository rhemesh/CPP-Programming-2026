#include<iostream>

using namespace std;

int main()
{
    int *intptr = new int[5]; //allocating memory for integer array of size 5

    cout<<"Enter the values: "<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>*(intptr+i);
    }
    cout<<"The array elements are:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<*(intptr+i)<<endl;
    }

    delete intptr;

}
/*
Summary:
DMA of integer array with size 5

Output:
10
12
23
34
35
The array elements are:
10
12
23
34
35

*/