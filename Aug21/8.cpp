// Employee Class

#include<iostream>
#include<string>
//#include<stdio.h>
using namespace std;
class Employee
{
    int empID;
    int pos;
    float profit;
    float salary;
    float min_wage = 10000;
    public:
    void getDetails();
    void computeSalary();
    void showDetails();
};
void Employee::getDetails()
{
    cout<<"Enter employee id: ";
    cin>>empID;
    cout<<"Enter position in company(1 - 10) : ";
    cin>>pos;
    cout<<"Enter profit earned in last quater : ";
    cin>>profit;
}
void Employee::computeSalary()
{
    salary = min_wage + profit*(0.2 + pos*0.1);
}
void Employee::showDetails()
{
    cout<<"Employee id is : "<<empID;
    cout<<"\nPosition of employee is : "<<pos;
    cout<<"\nSalary is : "<<salary;
}
int main(int argc, char const *argv[])
{
    Employee e;
    e.getDetails();
    e.computeSalary();
    e.showDetails();
    return 0;
}
