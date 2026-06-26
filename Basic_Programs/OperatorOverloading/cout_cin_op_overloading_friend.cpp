#include<iostream>

using namespace std;

class op
{
    char c = 'R';
    public:
    friend void operator<<(ostream&,op&);
    friend void operator>>(istream&,op&);
};

void operator<<(ostream & co,op& obj)
{
    co<<"a = "<<obj.c<<endl;
}

void operator>>(istream& cin,op& obj)
{
    cout<<"Enter character"<<endl;
    cin>>obj.c;
}

int main()
{
    op object;
    cin>>object;
    cout<<object;

    return 0;
    
}

/*

Summary:

<< >> cout and cin operator overloading using friend function

Output:

Enter character             
R
a = R

*/
