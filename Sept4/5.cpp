// constant function argument

#include<iostream>
using namespace std;

void fun(int &p, const int &q)
{
    p = 45;
    // q = 55;        //ERROR
}

int main(int argc, char const *argv[])
{
    int a = 1;
    const int b = 2;
    fun(a, b);
    return 0;
}
