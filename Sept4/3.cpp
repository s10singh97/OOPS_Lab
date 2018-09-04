// Copy Constructor
#include<iostream>
using namespace std;

class Test
{
    int a;
    public:
    Test()
    {
        a = 3;
        cout<<"Default Constructor\n";
    }
    Test(Test &)
    {
        a = 5;
        cout<<"Copy Constructor\n";
    }
};

int main(int argc, char const *argv[])
{
    Test t;
    Test b(t);
    Test c = b;
    return 0;
}
