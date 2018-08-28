// Implementing Friend Function

#include<iostream>
using namespace std;

class Employee
{
    int a;
    public:
    void getNum(int);
    friend void printNum();
};

void Employee::getNum(int x)
{
    a = x;
}

void printNum()
{
    Employee e;
    int x;
    cout<<"Enter a number\n";
    cin>>x;
    e.getNum(x);
    cout<<"The value of private member is: "<<e.a;
}

int main(int argc, char const *argv[])
{
    printNum();
    return 0;
}
