// Virtual Destructor

#include<iostream>
using namespace std;

class Base
{
    public:
    Base()
    {
        cout<<"Base class constructor called\n";
    }
    virtual ~Base()
    {
        cout<<"Base class destructor\n";
    }
};

class Derived: public Base
{
    public:
    Derived()
    {
        cout<<"Derived class constructor called\n";
    }
    ~Derived()
    {
        cout<<"Derived class destructor\n";
    }
};

int main(int argc, char const *argv[])
{
    Derived d;
    return 0;
}
