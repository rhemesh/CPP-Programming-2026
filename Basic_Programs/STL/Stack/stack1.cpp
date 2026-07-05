#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> sta;
    sta.push(10);  //10
    sta.push(20);  //10 20
    sta.push(30);  //10 20 30
    sta.push(40);  //10 20 30 40
    cout<<"top = "<<sta.top()<<endl;  //prints 40
    sta.pop();  //10 20 30  - removes 40
    sta.top() = 100; //10 20 100 - replaces top 30 as 100
    sta.push(50); //10 20 100 50
    sta.push(70); //10 20 100 50 70
    sta.pop(); //10 20 100 50 - removes 70
    while(!sta.empty())   //not empty,not empty,not empty,not empty,empty - No entry inside while
    {
        cout<<sta.top()<<endl;  //prints 50 , prints 100 , prints 20 , prints 10;
        sta.pop();  //removes 50, removes 100 ,removes 20 ,removes 10;
    }

    return 0;

}

/*

Summary:
stack uses FILO -first In last Out method 

Output:

top = 40
50
100
20
10

*/