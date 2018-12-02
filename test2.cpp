#include<iostream>
using namespace std;

class A{
    public:
    virtual void show()
    {
        cout<<"Base";
    }
};

class B: public A{
    void show()
    {
        cout<<"Derived";
    }
};

int main(int argc, char const *argv[])
{
    A *a = new B();
    a -> show();
    return 0;
}
