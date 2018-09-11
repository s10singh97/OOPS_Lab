// File I/O

#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    int b;
    ofstream a("a.txt");
    a<<12;
    a.close();
    ifstream c("a.txt");
    c>>b;
    cout<<b;
    c.close();
    return 0;
}
