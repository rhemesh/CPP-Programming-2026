#include<iostream>

using namespace std;

double area(int radius)
{
    return 3.142 * radius * radius;
}

int area(int length,int breadth)
{
    return length * breadth;
}
int main()
{
    cout<<area(5)<<endl;  //area of circle
    cout<<area(5,2)<<endl; //area of rectangle

    return 0;

}

/*
Summary:
Function overloading:
Finding the area of a circle and an rectangle using function overloading 
by passing different number of arguments.


Output:
78.55
10

*/