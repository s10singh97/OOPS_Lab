// Return by Reference
#include<iostream>
using namespace std;

int num;
int& fun()
{
    return num;
}
int main(int argc, char const *argv[])
{
    fun() = 5;
    cout<<num<<"\n"<<fun();
    return 0;
}
