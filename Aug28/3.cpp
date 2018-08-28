// Implementing Friend Function and checking value change in objects after passing(passing by reference)

#include<iostream>
using namespace std;

class Employee
{
    int a;
    public:
    void getNum(int x);
    void show();
    friend void printNum(Employee &);
};

void Employee::getNum(int x)
{
    a = x;
    cout<<"\n"<<a;
}

void Employee::show()
{
    cout<<"\n"<<a;
}

void printNum(Employee &e)
{
    e.a = 200;
    cout<<"\n"<<e.a;
}

int main(int argc, char const *argv[])
{
    Employee d;
    d.getNum(100);
    printNum(d);
    d.show();
    return 0;
}
