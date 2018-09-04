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
        cout<<"\nDefault Constructor\n";
    }
    Test(Test &t1)
    { 
        a = t1.a;
    }
    void show()
    {
        cout<<a<<"\n";
    }
};

int main(int argc, char const *argv[])
{
    Test t;
    t.show();
    Test b(t);
    b.show();
    Test c = b;
    c.show();
    return 0;
}
