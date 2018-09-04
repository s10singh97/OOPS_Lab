// Equality without operators

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 2, b = 1;
    int c = a ^ b;
    if(c)
    {
        cout <<"Not Equal";
    }
    else
        cout<<"Equal";
    return 0;
}
