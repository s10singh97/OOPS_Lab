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
        x = 4; y = 4;
    }
    operator Polar()            //Using Conversion Function
    {
        Polar temp;
        temp.r = sqrt(x*x + y*y);
        temp.theta = atan(y/x);
        return temp;
    }
};

int main(int argc, char const *argv[])
{
    Polar p1;
    Rectangle p2;
    p1 = p2;
    p1.display();
    return 0;
}