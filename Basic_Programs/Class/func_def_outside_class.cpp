#include<iostream>

using namespace std;

class score
{
    int team1,team2;
    public:
    void setvalues(int x,int y)
    {
        team1 = x;
        team2 = y;
    }
    void show();
};
void score::show()
{
    cout<<"team1 = "<<team1<<" "<<"team2 = "<<team2<<endl;
}

int main()
{
    score s;
    
    s.setvalues(2,3);
    s.show();

    return 0;

}

/*
Summary:

Defining function outside the class using class_name::member_function

Output:
team1 = 10 team2 = 20


*/