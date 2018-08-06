// Check for Prime

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number\n";
    int a, c = 0;
    cin>>a;
    for(int i = 1; i <= a/2; i++)
    {
        if(a % i == 0)
        {
            c++;
        }
    }
    if(c <= 1)
    {
        cout<<a<<" is a prime number";
    }
    else
    {
        cout<<a<<" is not a prime number";
    }
    return 0;
}