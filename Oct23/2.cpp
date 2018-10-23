// Type Converions(User-Defined to Basic)

#include<iostream>
using namespace std;

class A
{
    int a, b;
    public:
    void setValues(int x, int y)
    {
        a = x; b = y;
    }
    A()
    {
        a = 0; b = 0;
    }
    operator int()          //Using conversion function
    {
        return (a+b);
    }
    void display()
    {
        cout<<a;
    }
};

int main(int argc, char const *argv[])
{
    A obj;
    obj.setValues(4, 6);
    int x = obj;
    cout<<x;
    return 0;
}
