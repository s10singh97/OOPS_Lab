// Error Handling in File I/O

#include<iostream>
#include<fstream>
using namespace std;

void report(fstream &file)
{
    cout<<"rdstate: "<<file.rdstate()<<"\n";
    cout<<"good: "<<file.good()<<"\n";
    cout<<"fail: "<<file.fail()<<"\n";
    cout<<"bad: "<<file.bad()<<"\n";
    cout<<"eof: "<<file.eof()<<"\n";
    char c;
    while(file)
    {
        file.read((char*)&c, sizeof(c));
        // cout<<c;
    }
    cout<<"eof: "<<file.eof()<<"\n";
}

class A
{
    public:
    int data;
    float dd;
};

void check_bad_bit(fstream &file, A &a1)
{
    file.read((char*)&a1, sizeof(a1));
    cout<<"bad: "<<file.bad();
}

int main(int argc, char const *argv[])
{
    fstream fs;
    fs.open(__FILE__, ios::in);
    report(fs);
    A a1;   
    check_bad_bit(fs, a1);
    return 0;
}
