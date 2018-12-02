#include<iostream>
using namespace std;

class A{
    public:
    virtual void show(){
        cout<<"Class A";
    }
};

class B:public A
{
    void show(){
        cout<<"Class B";
    }
};

main(int argc, char const *argv[])
{
    A *a = new B();
    a -> show();
    return 0;
}
