// Reversing a number

#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number\n";
    int a, b = 0;
    cin>>a;
    while(a)
    {
        int d = a % 10;
        b = b*10 + d;
        a /= 10;
    }
    cout<<b;
    return 0;
}