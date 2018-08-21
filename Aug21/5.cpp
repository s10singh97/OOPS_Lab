// register variable implementation

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    register int i = 10;
    //int i = 10;
    int *p = &i;
    cout<<p<<"\n"<<&i;
    return 0;
}
