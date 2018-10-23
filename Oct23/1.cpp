// Type Converions(Basic to User-Defined)

#include<iostream>
using namespace std;

class A
{
    int a;
    public:
    void setValues(int x)
    {
        a = x;
    }
    A()
    {
        a = 0;
    }
    A(int x)        //Using parameterized Constructor
    {
        a = x;
    }
    void display()
    {
        cout<<a;
    }
};

int main(int argc, char const *argv[])
{
    A obj;
    int x = 7;
    obj = x;
    obj.display();
    return 0;
}
