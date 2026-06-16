#include<iostream>
#define square(x) x*x
using namespace std;
inline int square1(int x)
{
    return x*x;
}
int main()
{
    int x = 7;
    //calling inline function
    cout<<square(x + 2)<<endl;    //x+ 2*x + 2 => 5 + 2*5 +2 = 17 
    //calling macro function
    cout<<square1(x + 2)<<endl;    //x+2 * x+2 => 5+2 * 5+2 = 49

    return 0;
}

/*
Summary:

if a function is declared as inline then at the time if compilation the body of
the function get expanbded instead of performing overhaed of the function.
-> the function is expanded at the point at which it is called
-> it basically works for smaller function & not for larger function


difference between macro & inline
==========================
both dont follow function overhead
-> macro are substituted at preprocessing & inline is at compliation
-> in macro guaranteed text substitution but in inline there is no gauranrtedd
text substitution since it works for only small functions.
-> macros dont evaluate arguments only substitutes but inline function evaluate
and substitute

Output:
23 
81
*/