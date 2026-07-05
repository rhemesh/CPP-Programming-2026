#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main()
{
    queue<string> que;
    que.push("these ");  //these
    que.push("are ");    //these are
    que.push("more than ");  //these are more than
    cout<<que.front()<<endl;;  //prints these
    que.pop();    //removes these
    cout<<que.front()<<endl;; //prints are
    que.push("five ");  //are more than five
    que.push("words "); //are more than five words
    que.pop();      // removes are
    cout<<que.front()<<endl;  // prints more than
    que.pop();  //removes more than
    cout<<que.back()<<endl; // prints words
    cout<<que.size()<<endl;  // size is two - five words
    que.pop();  //removes five 
    cout<<que.size()<<endl; //size id one - words
    while(!(que.empty())) //not empty, empty - not go inside while
    {
        cout<<que.front()<<endl; //prints words
        que.pop(); //removes words
    }
    return 0;

}

/*

Queue: it follows first in first out


Output:

these 
are 
more than 
words 
2
1
words


*/