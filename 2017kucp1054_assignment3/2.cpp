#include<iostream>
using namespace std;

class Addition
{
    int a, b;
    public:
    friend int add(int, int);
};

int add(int p, int q)
{
    Addition ob;
    ob.a = p;
    ob.b = q;
    int result = ob.a + ob.b;
    return result;
}

int main(int argc, char const *argv[])
{
    int result = add(4, 5);
    cout<<"Sum: "<<result;
    return 0;
}
