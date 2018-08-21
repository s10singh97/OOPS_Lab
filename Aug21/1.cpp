// Abstraction Property Implementation

#include<iostream>
using namespace std;
class A
{
    int i;
    public:
    void getdata()
    {
        i = 100;
        cout<<i;
    }
};
int main(int argc, char const *argv[])
{
    A a;
    a.getdata();
    // a.i = 200;
    // cout<<a.i;
    return 0;
}
