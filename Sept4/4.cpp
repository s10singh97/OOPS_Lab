// Constant member Function
#include<iostream>
using namespace std;

class Test
{
    int a;
    public:
    void nonConst()
    {
        a = 5;
        cout<<a;
    }
    void con() const
    {
        // a = 6;   //Read-Only (ERROR)
    }
};

int main(int argc, char const *argv[])
{
    Test t;
    t.nonConst();
    t.con();
    return 0;
}