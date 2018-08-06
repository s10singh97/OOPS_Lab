// Swap using call by value

#include<iostream>
using namespace std;
int main()
{
    int a, b;
    void swap(int, int);
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    swap(a, b);
    return 0;
}

void swap(int p, int q)
{
    int temp = p; 
    p = q; 
    q = temp;
    cout<<"Swapped Numbers are\n"<<p<<"\t"<<q;
}