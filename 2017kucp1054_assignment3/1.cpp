#include<iostream>
using namespace std;

class Test1
{
    int a;
    public:
    friend void swap(int, int);
    void display1()
    {
        cout<<a;
    }
};

class Test2
{
    int b;
    public:
    friend void swap(int, int);
    void display2()
    {
        cout<<b;
    }
};

void swap(int p, int q)
{
    Test1 t1;
    t1.a = p;
    Test2 t2;
    t2.b = q;
    cout<<"Values after swapping:\na = ";
    t1.display1();
    cout<<"\nb = ";
    t2.display2();
    int temp = t1.a;
    t1.a = t2.b;
    t2.b = temp;
    cout<<"\nValues after swapping:\na = ";
    t1.display1();
    cout<<"\nb = ";
    t2.display2();
}

int main(int argc, char const *argv[])
{
    swap(3, 4);
    return 0;
}
