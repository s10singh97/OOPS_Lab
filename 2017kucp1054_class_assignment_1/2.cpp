// Creating object using Private Constructor

#include<iostream>
using namespace std;

class Test
{
    Test()
    {
        cout<<"Object Using Private Constructor created\n";
    }
    public:
    Test * getObject()
    {
        return (new Test);
    }
};

int main(int argc, char const *argv[])
{
    Test *ob1 = NULL;
    ob1 = ob1 -> getObject();
    return 0;
}
