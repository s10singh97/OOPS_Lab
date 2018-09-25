// Error Handling in File I/O

#include<iostream>
#include<fstream>
using namespace std;

void report(fstream &file)
{
    cout<<file.rdstate()<<"\n";
    cout<<file.good()<<"\n";
    cout<<file.fail()<<"\n";
    cout<<file.bad()<<"\n";
    cout<<file.eof()<<"\n";
    char c;
    while(file)
    {
        file.read((char*)&c, sizeof(c));
        cout<<c;
    }
    cout<<"\n"<<file.eof()<<"\n";
}

int main(int argc, char const *argv[])
{
    fstream fs;
    fs.open("fread.txt", ios::in|ios::binary);
    report(fs);   
    return 0;
}
