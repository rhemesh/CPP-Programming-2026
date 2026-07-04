#include<iostream>

using namespace std;

template<typename i,typename j>

j addition(i a,j b)
{
    return a+b;
}

template<class a,class b>

void multiply(a num1,b num2)
{
    cout<<"Multiplication of num1 and num2: "<<num1*num2<<endl;
}

int main()
{
    cout<<"addition:"<<addition<int,double>(12,335.34)<<endl;;
    multiply<double,int>(2323.32342,32);


    return 0;

}

/*

Summary:

template typename can be replaced with the name "class" and also template can be declared with two different types

Output:

addition:347.34
Multiplication of num1 and num2: 74346.3


*/
