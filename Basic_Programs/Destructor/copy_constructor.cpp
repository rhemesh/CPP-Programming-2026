#include<iostream>
#include<cstring>

using namespace std;

class String
{
    char *s;
    int size;
    public:
    String(const char *str = NULL);
    ~String()
    {
        delete []s;
    }
    String(const String&);
    void print()
    {
        cout<<s<<endl;
    }
    void modify(const char *str);
};
String::String(const char *str)
{
    size = strlen(str);
    s = new char[size+1];
    strcpy(s,str);
    cout<<"Constructor"<<endl;
}
void String::modify(const char *s1)
{
    delete[] s;
    size = strlen(s1);
    s = new char[size+1];
    strcpy(s,s1);
    cout<<"Inside modify"<<endl;
}
String::String(const String& old_str)
{
    size = old_str.size;
    s = new char[size+1];
    strcpy(s,old_str.s);
    cout<<"Copy constructor"<<endl;
} 
int main()
{
    String str1("Hello");
    String str2(str1);

    str1.print();
    str2.print();

    str2.modify("Helloworld");
    str1.print();
    str2.print();
    return 0;
}