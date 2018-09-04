// Constant Object

#include<iostream>
using namespace std;

class Test
{
    int a;
    public:
    Test()
    {
        a = 1;
    }
    void show_a()
    {
        cout<<a<<"\n";
    }
    void show() const
    {
        cout<<a<<"\n";
    }
};

int main(int argc, char const *argv[])
{
    const Test t;
    // t.show_a();     //ERROR(can only access constant member function)
    t.show();
    return 0;
}
