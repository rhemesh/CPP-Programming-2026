#include<iostream>

using namespace std;
namespace first
{
    int a = 13;
    void sum(int b)
    {
        cout<<"Sum of a and b inside first namespace :"<<a+b<<endl;
    }
}

namespace second
{
    int a = 15;
    void sum(int b)
    {
        cout<<"Sum of a and b inside second namespace :"<<a+b<<endl;
    }
}


int main()
{
    int b = 10;

#if 1
    {
        using namespace first;
        cout<<a<<endl;
        sum(b);
    }

#else
    {
        using namespace first;
        cout<<a<<endl;
        sum(b);
        cout<<"accessing second namespace variable inside first; a = "<<second::a<<endl;
    }

#endif

    {
        using namespace second;
        cout<<a<<endl;
        sum(b);
    }

    return 0;
}

/*

Summary:
2nd type to avoid name conflicts using "using keyword" 

namespace can be differentiated using "using keyword" in particular block if we use 
"using namespace first" and any variable is used inside that block it refers to only for the namespace first.

in namespace first block we can also access the variables inside second namespace 
using scope resolution operator.

Output:(when #if 0)
13
Sum of a and b inside first namespace :23
15
Sum of a and b inside second namespace :25


Output: (when #if 1)

13
Sum of a and b inside first namespace :23
accessing second namespace variable inside first; a = 15
15
Sum of a and b inside second namespace :25




*/