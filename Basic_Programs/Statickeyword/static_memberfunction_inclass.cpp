#include<iostream>

using namespace std;

class sports
{
    int current_score;
    static int totalscore;
    public:
    sports()
    {
        current_score = 2;
        cout<<"Constructor"<<endl;
    }
    ~sports()
    {
        cout<<"Destructor"<<endl;
    }

    static void setscore()
    {
        //current_score = 2; //non static data members cannot be accessed inside the static member function
        totalscore = 20;
    }
    void print()
    {
        cout<<"current score = "<<current_score<<endl;
        cout<<"Total score = "<<totalscore<<endl;
    }
};
//int sports::current_score  =10; //non static data members cannot be defined outside the class
int sports::totalscore = 0;//defining static data member
int main()
{
    sports s;
    s.print();
    s.setscore();
    s.print();

    return 0;
}

/*
Summary:

non static data members cannot be accessed in an static member function

Output:
Constructor
current score = 2
Total score = 0
current score = 2
Total score = 20
Destructor


*/