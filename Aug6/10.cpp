// Printing the sum of 1 + x + x2/2 + x3/3 + ....
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Enter the numbr of terms for the series\n";
    int a, x;
    float s = 1.0;
    cin>>a;
    cout<<"Enter the value of X\n";
    cin>>x;
    for(int i = 1; i < a; i++)
    {
        int p = pow(x, i);
        float d = (float)(p) / i;
        s += d;
    }
    cout<<s;
    return 0;
}