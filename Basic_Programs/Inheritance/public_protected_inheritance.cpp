#include<iostream>

using namespace std;

class shape
{
    protected:
    int width,height;
    double r;
    public:
    void set_width(int w)
    {
        width = w;
    }
    void set_height(int h)
    {
        height = h;
    }
    void set_radius(double r)
    {
        this->r = r;
    }
};

class rect : public shape
{
    public:
    int area()
    {
        return width*height;
    }
};

class circle : public shape
{
    public:
    double area()
    {
        return 3.142 * r * r;
    }
};
class triangle : public shape
{
    public:
    int area()
    {
        return (width*height)/2;
    }
};
int main()
{
    rect obj;
    obj.set_width(5);
    obj.set_height(5);
    cout<<obj.area()<<endl;;
    circle c;
    c.set_radius(2);
    cout<<c.area()<<endl;
    triangle t;
    t.set_width(2);
    t.set_height(3);
    cout<<t.area()<<endl;

    return 0;

}