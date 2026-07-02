#include<iostream>

using namespace std;

class payment
{
    protected:
    int amountPaid = 0;
    public:
    virtual void display()
    {
        amountPaid = 1000;
        cout<<"Inside payment class"<<endl;
        cout<<"Total amount Paid = "<<amountPaid<<endl;

    }
};

class upi : public payment
{
    public:
    void display()
    {
        amountPaid += 2000;
        cout<<"Payment made through upi"<<endl;
        cout<<"Total amount Paid = "<<amountPaid<<endl;

    }
};

class cc : public payment
{
    public:
    void display()
    {
        amountPaid += 1000;
        cout<<"Payment made through credit card"<<endl;
        cout<<"Total amount Paid = "<<amountPaid<<endl;
    }
};

class cash : public payment
{
    public:
    void display()
    {
        amountPaid += 7000;
        cout<<"Payment made through cash"<<endl;
        cout<<"Total amount Paid = "<<amountPaid<<endl;

    }
};

int main()
{
    payment *pay;


    payment obj;  //calling base class
    pay = &obj;
    pay->display();


    pay = new upi;
    pay->display();

    cc c;
    pay = &c;
    pay->display();

    cash ca;
    pay  = &ca;
    pay->display();

    return 0;

}


/*

Summary:

late binding is performed using virtual keyword

Output:
Inside payment class
Total amount Paid = 1000
Payment made through upi
Total amount Paid = 2000
Payment made through credit card
Total amount Paid = 1000
Payment made through cash
Total amount Paid = 7000

*/