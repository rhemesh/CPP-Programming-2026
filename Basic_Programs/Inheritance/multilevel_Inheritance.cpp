#include<iostream>

using namespace std;

class sport{
    protected:
    int team1score,team2score;
    public:
    void set_scores(int x = 1,int y=0)
    {
        team1score = x;
        team2score = y;
    }

};

class maxscorer : public sport
{
    protected:
    int maxscore;
    public:
    void findmaxscore()
    {
        maxscore = max(team1score,team2score);
    }
};

class winner: public maxscorer
{
    public:
    void display()
    {
        cout<<"Max score = "<<maxscore<<endl;
    }
};

int main()
{
    winner w;
    w.set_scores(10,7);
    w.findmaxscore();
    w.display();

    return 0;

}

/*

Summary:
Multilevel Inheritance:

child class will be inherited from the parent class and 
then the other child class will be inherited from the first child class 
which acts as a parent to the recently created child

Output:

Max score = 10

*/