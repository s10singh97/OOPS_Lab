//Using default Constructor

#include<iostream>
using namespace std;

class Test
{
    public:
    static int count;
    Test()
    {
        count++;
    }
    static int displayCount()
    {
        return count;
    }
};

int Test::count = 0;

int main(int argc, char const *argv[])
{
    cout<<"No. of objects before creating objects: "<<Test::displayCount();
    Test t1;
    Test t2;
    cout<<"\nAfter creating two objects : "<<Test::displayCount();
    return 0;
}