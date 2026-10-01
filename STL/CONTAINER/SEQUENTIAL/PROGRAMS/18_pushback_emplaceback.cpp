#include<iostream>
#include<vector>
#include<deque>
#include<list>

using namespace std;
class test
{
    public:
    string name;
    int U_ID;
    test(string n,int id)
    {
        cout<<"Constructor called:"<<endl;
        name = n;
        U_ID = id;
        cout<<"Name = "<<name<<" "<<"Id: "<<U_ID<<endl;
    }
};

int main()
{
    vector<test> vec;
    test s1("Chirag",45);
    vec.push_back(s1);
   // vec.push_back("Divakar",76); //This cannot be used because we cannot pass the arguments directly in the push back 
    vec.emplace_back("AKash",56);

    for(const test& s : vec)
        cout<<"Name: "<<s.name<<" "<<"U_ID: "<<s.U_ID<<endl;
    cout<<endl;

    deque<test> deq;
    deq.push_back(s1);
    deq.emplace_back("Divakar",76);
    for(const test& x : deq)
        cout<<"Name: "<<x.name<<" "<<"U_ID: "<<x.U_ID<<endl;
    cout<<endl;

    list<test> lst;
    lst.emplace_back("Tinku",456);
    lst.push_back(s1);
    for(test& x: lst)
        cout<<"Name: "<<x.name<<" "<<"U_ID: "<<x.U_ID<<endl;
    cout<<endl;

    return 0;

}

/*
Output:
Constructor called:
Name = Chirag Id: 45
Constructor called:
Name = AKash Id: 56
Name: Chirag U_ID: 45
Name: AKash U_ID: 56

Constructor called:
Name = Divakar Id: 76
Name: Chirag U_ID: 45
Name: Divakar U_ID: 76

Constructor called:
Name = Tinku Id: 456
Name: Tinku U_ID: 456
Name: Chirag U_ID: 45
*/