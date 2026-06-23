#include<iostream>
#include<cstring>
using namespace std;
class String
{
    char *s;
    int size;
    public:
    String(const char *str = NULL);  //constructor declaration
    ~String()
    {
        delete []s;
        cout<<"Destructor"<<endl;
    }

    void print()
    {
        cout<<s<<endl;
    }
    void change(const char *);
};
String::String(const char *str) //constructor defination
{
    size = strlen(str);
    s = new char[size+1];
    strcpy(s,str);
    cout<<"Constructor"<<endl;
}
void String::change(const char *str)  //function defination of change function
{
    delete []s; //de-allocating the before allocated memory
    size = strlen(str);
    s = new char[size+1]; //allocating memory with the size of str length + 1
    strcpy(s,str);
}

int main()
{
    String str1("Hello");
    String str2 = str1;

    str1.print();
    str2.print();

    str2.change("HelloWorld");

    str1.print();
    str2.print();
    return 0;
}

/*
Summary:
Creating class for string and using constructor and a another function to demonstrate the dynamic memory allocation

Output:
Constructor
Hello
Hello
HelloWorld
HelloWorld
Destructor


*/