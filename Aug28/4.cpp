//Call by value

#include<iostream>
using namespace std;

void swap_byvalue(int p, int q)
{
    int t = p;
    p = q;
    q = t;
    cout<<"During call by value: "<<p<<"\t"<<q<<"\n";
}

void swap_byreference(int &p, int &q)
{
    int t = p;
    p = q;
    q = t;
    cout<<"During call by reference: "<<p<<"\t"<<q<<"\n";
}

void swap_bypointer(int *p, int *q)
{
    int t = *p;
    *p = *q;
    *q = t;
    cout<<"During call by pointer: "<<*p<<"\t"<<*q<<"\n";
}

int main(int argc, char const *argv[])
{
    int a = 4, b = 5;
    cout<<"Original Value: "<<a<<"\t"<<b<<"\n";
    swap_byvalue(a, b);
    cout<<"After call by value: "<<a<<"\t"<<b<<"\n";
    swap_byreference(a, b);
    cout<<"After call by reference: "<<a<<"\t"<<b<<"\n";
    swap_bypointer(&a, &b);
    cout<<"After call by pointer: "<<a<<"\t"<<b<<"\n";
    return 0;
}
