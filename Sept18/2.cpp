// File pointer and manipulators

#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    ifstream ifs;
    ifs.open("fread.txt");
    cout<<ifs.tellg();
    ifs.seekg(4, ios::beg);
    cout<<"\n"<<ifs.tellg()<<"\n";
    ofstream ofs;
    ofs.open("ffwrite.txt");
    char a;
    int count = 4;
    while(ifs)
    {
        ifs.get(a);
        ofs.put(a);
        count++;
    }
    // ifs.clear();
    // ifs.seekg(0, ios::beg);
    // while(ifs)
    // {
    //     count = ifs.tellg();
    // }
    cout<<"\nNo. of characters in file: "<<count;
    return 0;
}
