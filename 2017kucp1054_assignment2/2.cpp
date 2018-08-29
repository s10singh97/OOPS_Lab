//Finding maximum number

#include<iostream>
using namespace std;

class Test1
{
    int a;
    public:
    friend void max();
    void assignValue1(int x)
    {
        a = x;
    }
    int displayvalue1()
    {
        return a;
    }
};

class Test2
{
    int b;
    public:
    friend void max();
    void assignValue2(int y)
    {
        b = y;
    }
    int displayvalue2()
    {
        return b;
    }
};

int max(int x, int y)
{
    Test1 t1;
    Test2 t2;
    t1.assignValue1(x);   //Assigning value x to variable a of class Test1
    t2.assignValue2(y);   //Assigning value y to variable b of class Test2
    if(t1.displayvalue1() > t2.displayvalue2())
        return t1.displayvalue1();
    else
        return t2.displayvalue2();
}

int main(int argc, char const *argv[])
{
    int max_number = max(10, 5);
    cout<<"Maximum number is: "<<max_number;
    return 0;
}