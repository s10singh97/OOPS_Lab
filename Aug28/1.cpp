// Implementing Friend Function and passing Objects in a function

#include<iostream>
using namespace std;

class Employee
{
    int a;
    public:
    void getNum(int);
    friend void printNum(Employee);
};

void Employee::getNum(int x)
{
    a = x;
}

void printNum(Employee e)
{
    cout<<"The value of private member is: "<<e.a;
}

int main(int argc, char const *argv[])
{
    Employee d;
    int x;
    cout<<"Enter a number\n";
    cin>>x;
    d.getNum(x);
    printNum(d);
    return 0;
}
