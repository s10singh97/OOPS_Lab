// Static variable implemntation
#include<iostream>
using namespace std;
void fun()
{
    static int i = 10;
    i++;
    cout<<i;
}
int main(int argc, char const *argv[])
{
    fun();
    fun();
    fun();
    return 0;
}
