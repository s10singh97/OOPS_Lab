// Crating object of a Class using private constructor

#include<iostream>
using namespace std;

class Parent
{
    Parent()
    {
        cout<<"Constructor of Parent Class called\n";
    }
    friend class Base;
};

class Base
{
    public:
    Base()
    {
        Parent p1;
        cout<<"Constructor of Base class called\n";
    }
};

int main(int argc, char const *argv[])
{
    Base b1;  
    return 0;
}
