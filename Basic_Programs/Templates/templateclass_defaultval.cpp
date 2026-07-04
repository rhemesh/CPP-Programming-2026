#include<iostream>

using namespace std;

template<typename a,typename b = char>  //default data type for b is assigned as char
class parent
{
    a x;
    b y;
    public:
    parent(a x,b y)
    {
        this->x = x;
        this->y = y;
    }
    void display()
    {
        cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
    }
};
int main()
{
    parent<int>obj(5,'R');
    obj.display();
    parent<int,int>obj3(2,5);
    obj3.display();
    parent<char,char>obj5('g','e');
    obj5.display();

    return 0;

}

/*

Summary:
template class with default data type assigned
when default datatype is assigned if no datatype is specified in object it takes the default orelse it takes the current datatype which is passed

Output:

x = 5 y = R
x = 2 y = 5
x = g y = e

*/