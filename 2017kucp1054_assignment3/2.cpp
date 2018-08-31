#include<iostream>
using namespace std;

class Addition
{
    int a, b, sum;
    public:
    friend Addition add(int, int);
    void show()
    {
        cout<<sum;
    }
};

Addition add(int p, int q)
{
    Addition ob;
    ob.a = p;
    ob.b = q;
    ob.sum = ob.a + ob.b;
    return ob;
}

int main(int argc, char const *argv[])
{
    Addition obj = add(4, 5);
    cout<<"Sum: ";
    obj.show();
    return 0;
}