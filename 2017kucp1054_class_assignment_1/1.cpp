// Simultaneously read from two files

#include<iostream>
#include<fstream>
using namespace std;

void read_from_two_files()
{
    ifstream ifs1, ifs2;
    ifs1.open("fread.txt");
    ifs2.open("fread2.txt");
    string a, b;
    while(1)
    {
        if(ifs1)
        {
            getline(ifs1, a);
            cout<<a;
        }
        if(ifs2)
        {
            getline(ifs2, b);
            cout<<b;
        }
        if(!ifs1 && !ifs2)
            break;
    }
}

int main(int argc, char const *argv[])
{
    read_from_two_files();
    return 0;
}
