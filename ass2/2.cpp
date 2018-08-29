//Without using Default Constructor

#include<iostream>
using namespace std;

class Test
{
    public:
    static int count;
    void modifyCount()
    {
        count++;
    }
    static void displayCount()
    {
        cout<<"\nObject Count : "<<count<<"\n";
    }
};

int Test::count = 0;

int main(int argc, char const *argv[])
{
    cout<<"No. of objects before creating objects: ";
    Test::displayCount();
    Test t1;
    Test t2;
    t1.modifyCount();
    t2.modifyCount();
    cout<<"\nAfter creating two objects : ";
    Test::displayCount();
    return 0;
}