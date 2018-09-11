// File I/O

#include<iostream>
#include<fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    int b;
    string s = "Hello World!!!", ss;

    ofstream a("a.txt");
    if(a.is_open())
        cout<<"File Opened Successfully to write\n";
    a.write((char *)&s, sizeof(s));
    a.close();
    
    ifstream c("a.txt");
    if(c.is_open())
        cout<<"File Opened Successfully to read\n";
    c.read((char*)&ss, sizeof(ss));
    cout<<"Data in file is: "<<ss;
    c.close();
    return 0;
}
