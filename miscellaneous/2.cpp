// Crating object of a Class using private constructor

#include<iostream>
using namespace std;

class Parent
{
    Parent()
    {
        cout<<"Object of Private class created\n";
    }
    friend class Base;
    friend void call_private_constructor();
};

void call_private_constructor()
{
    Parent p1;
}

class Base
{
    public:
    Base()
    {
        Parent p1;
    }
};

int main(int argc, char const *argv[])
{
    cout<<"\nUsing Method 1(via a friend class): \n";
    Base b1;
    cout<<"\nUsing Method 2(via friend function):\n";
    call_private_constructor();  
    return 0;
}
