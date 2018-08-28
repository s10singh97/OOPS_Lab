// Employee Class

#include<iostream>
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
    int promotionStats();
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
int Employee::promotionStats()
{
    if (profit > min_wage)
        return 1;
    else
        return 0;
}
int main(int argc, char const *argv[])
{
    Employee e;
    e.getDetails();
    e.computeSalary();
    e.showDetails();
    int i = e.promotionStats();
    if(i == 1)
        cout<<"Will be promoted\n";
    else
        cout<<"Will not be promoted\n";
    return 0;
}
