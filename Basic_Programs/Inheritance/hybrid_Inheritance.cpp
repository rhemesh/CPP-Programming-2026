#include<iostream>

using namespace std;

class population
{
    protected:
    int total_population;
};
class city1 : virtual public population
{
    protected:
    int city1_population;
    public:
    void set_city1population(int t = 2000)
    {
        city1_population = t;
    }
};

class city2 :virtual public population
{
    protected:
    int city2_population;
    public:
    void set_city2population(int t = 234353)
    {
        city2_population = t;
    }
};

class total : public city1,public city2
{
    public:
    void calculatetotal()
    {
        total_population = city1_population + city2_population;
    }
    int totalpopulation()
    {
        return total_population;
    }
};

int main()
{
    total t;
    t.set_city1population(1000);
    t.set_city2population(43334);
    t.calculatetotal();
    cout<<"total population of two cities are: "<<t.totalpopulation()<<endl;

    return 0;

}

/*

Summary:

Hybrid Inheritance:

child class is derived from two already derived child classes with common parent class

the datamember of the parent class cannot be accessed in the final child class 
because that is already inherited to the child class before 
This is called death of diamond issue or ambiguity error where base class properties are inherited multiple times 
using virtual we can access that data member of the parent class to the final child class

Output:

total population of two cities are: 44334

*/