#include<iostream>

using namespace std;

class st
{
    int code;
    static int count;

    public:
    st()
    {
        cout<<"Constructor called"<<endl;
        code = ++count;
    }
    void showcode()
    {
        cout<<"code = "<<code<<endl;
    }
    static void showcount()
    {
        cout<<"count = "<<count<<endl;
    }
    
};
int st::count = 0;
int main()
{
    st s,s1,s2;
    s.showcode();
    s.showcount();
    s1.showcode();
    s1.showcount();
    s2.showcode();
    s2.showcount();

    return 0;


}