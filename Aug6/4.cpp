// Program to find Factorial

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"Enter a number to find it's factorial\n";
    int a, b;
    cin>>a;
    b = a;
    int fact = 1;
    while(a)
    {
        fact *= a;
        a--;
    }
    cout<<fact;
    return 0;
}
