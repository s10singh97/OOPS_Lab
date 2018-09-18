// Lower case to upper case

#include<iostream>
#include<fstream>
#include<ctype.h>
using namespace std;

int main(int argc, char const *argv[])
{
    if(argc != 3)
    {
        cout<<"Enter names of both the files";
        exit(1);
    }
    string rfile = argv[1];
    string wfile = argv[2];
    ifstream ifs;
    ifs.open(rfile);
    ofstream ofs;
    ofs.open(wfile);
    char a;
    while(ifs)
    {
        ifs.get(a);
        ofs.put(toupper(a));
    }
    return 0;
}
