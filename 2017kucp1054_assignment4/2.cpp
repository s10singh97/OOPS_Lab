#include<iostream>
#include<fstream>
using namespace std;

void read_from1_writeto_2(ifstream &ifs, ofstream &ofs)
{
    char a;
    while(ifs)
    {
        ifs.get(a);
        ofs.put(a);
    }
}

int main(int argc, char const *argv[])
{
    ifstream ifs;
    ifs.open("fread.txt");
    ofstream ofs;
    ofs.open("fwrite.txt", ios::app);
    read_from1_writeto_2(ifs, ofs);
    return 0;
}
