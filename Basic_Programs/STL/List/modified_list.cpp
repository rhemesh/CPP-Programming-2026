#include<iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
    list<string> lst; //creating list
    string s;
    cout<<"Enter strings : "<<endl;
    for(int i=0;i<5;i++)
    {
        getline(cin,s); //reading string with space
        lst.push_back(s);  //adding to list
    }

    cout<<"size = "<<lst.size()<<endl;  //size is 5
    cout<<"Strings: "<<endl;
    for(string s:lst)   //going through all the elements of the lst
    {
        cout<<s<<endl;
    }

    list<string>::iterator l = lst.begin();
    while(l != lst.end())
    {
        *l = *l + "Hello";   //modifying string
        l++;
    }

    cout<<"modified strings :"<<endl;
    l = lst.begin();
    while(l!=lst.end())
    {
        cout<<*l<<endl;  //printing the modified string
        l++;
    }


    return 0;

}

/*


Output:
Enter strings : 
1st 
2nd 
3rd
word4
word 5 
size = 5
Strings: 
1st 
2nd 
3rd
word4
word 5 
modified strings :
1st Hello
2nd Hello
3rdHello
word4Hello
word 5 Hello


*/