// Function Overloading

#include<iostream>
using namespace std;

class A
{
    int a;
    float b;
    char c;
    public:
    int fun(int a1)
    {
        a = a1;
        return a;
    }
    float fun(float b1)
    {
        b = b1;
        return b;
    }
    char fun(char c1)
    {
        c = c1;
        return c;
    }
};

int main(int argc, char const *argv[])
{
    A ob;
    cout<<ob.fun((int)2)<<"\n";
    cout<<ob.fun(2.5f)<<"\n";
    cout<<ob.fun('B');
    return 0;
}
