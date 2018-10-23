// Type Conversion(User-Defined to User-Defined)

#include<iostream>
#include<math.h>
using namespace std;

class Polar
{
    public:
    float r, theta;
    void display()
    {
        cout<<"r: "<<r;
        cout<<"\ntheta: "<<theta;
    }
};

class Rectangle
{
    float x, y;
    public:
    Rectangle()
    {
        x = 0; y = 0;
    }
    void setValues(float a, float b)
    {
        x = a; y = b;
    }
    operator Polar()            //Using Conversion Function
    {
        Polar temp;
        temp.r = sqrt(x*x + y*y);
        temp.theta = atan(y/x);
        return temp;
    }
    Rectangle(Polar &p)         //Using Copy Constructor
    {
        x = p.r*cos(p.theta);
        y = p.r*sin(p.theta);
    }
    void display()
    {
        cout<<"\nx: "<<x;
        cout<<"\ny: "<<y;
    }
};

int main(int argc, char const *argv[])
{
    Polar p1;
    Rectangle p2;
    p2.setValues(4, 4);
    p1 = p2;
    p1.display();
    p2 = p1;
    p2.display();
    return 0;
}