#include<iostream>
#include<string>

using namespace std;

int main()
{
    string num1,num2;
    cout<<"Enter num1 as a string:"<<endl;
    getline(cin,num1);
    cout<<"Enter num2 as a string:"<<endl;
    getline(cin,num2);

    int res = num1.compare(num2);
    cout<<"res = "<<res<<endl;;
    if(!res)
    {
        cout<<"Two strings are equal"<<endl;
    }
    else
        cout<<"num1 and num2 are not equal"<<endl;;

    return 0;

}


/*

string comparisn using two strings
if num1 and num2 are equal comapre() function will return as 0 and 
if those are not equal it will return non -1.
Output:

Enter num1 as a string:
3432
Enter num2 as a string:
3432
res = 0
Two strings are equal

*/