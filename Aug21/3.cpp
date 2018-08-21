// Global Variable
#include<iostream>
using namespace std;

int a = 10;
int main(int argc, char const *argv[])
{
    a = 20;
    cout<<::a;
    cout<<"\n"<<a;
    return 0;
}
