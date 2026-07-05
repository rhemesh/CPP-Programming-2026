#include<iostream>
#include<string>

using namespace std;

int main()
{
    string word1,word2,word3;
    cout<<"Enter two words: "<<endl;
    //cin>>word1>>word2;    //cin reads characters only till it encounters whitespace or newline

    getline(cin,word1);   //getline reads whitespaces as a character,it stops reading when new line is encountered
    getline(cin,word2);

    word3 = word1;  //copying string from word1 to word3
    cout<<"word3 after copying : "<<word3<<endl;

    word3 = word1+word2;
    cout<<"word3 after concating two words : "<<word3<<endl;

    return 0;

}

/*

Summary:
Copying string and concating string

Output: using cin
Enter two words: 
Hello world
word3 after copying : Hello
word3 after concating two words : Helloworld

Output: using getline 
Enter two words: 
Hello world
This is Universe
word3 after copying : Hello world
word3 after concating two words : Hello worldThis is Universe
*/