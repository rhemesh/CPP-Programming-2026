#include<iostream>

using namespace std;

template<typename t>  //creation of template for maximum function
t maximum(t a,t b)
{
    return (a>b)?a:b;
}
//template is declared seperately for each function
template<typename t> //creation of template for minimum function
t minimum(t a,t b)
{
    return (a<b)?a:b;
}
int main()
{
    cout<<maximum<int>(12,34)<<endl;;  //integer template
    cout<<maximum<double>(32.43,36.1)<<endl; //double template

    cout<<minimum<int>(1223,355)<<endl;
    cout<<minimum<double>(23.3,34634.4);

    return 0;

}

/*

Summary:

Template is simple and yet very powerful tool in C++. 
The simple idea is to pass data type as a parameter so that we don’t need to 
write same code for different data types.
C++ adds two new keywords to support    templates: ‘template’ and ‘typename’. 
The second keyword can always be replaced by keyword ‘class’.
How templates work?
Templates are expanded at compiler time.  
compiler does type checking before template expansion. 
The idea is simple, source code contains only function/class, but compiled code 
may contain multiple copies of same function/class


Templates can be used for any data types
each function should have seperate template


Output:

34          
36.1
355
23.3

*/