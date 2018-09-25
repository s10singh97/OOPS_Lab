// Reading from one file nd writing to another in just ONE INSTRUCTION

#include<iostream>
#include<fstream>
using namespace std;

void one_instruction_write(ifstream &ifs, ofstream &ofs)
{
    ofs<<ifs.rdbuf();
}

int main(int argc, char const *argv[])
{
    ifstream ifs;
    ifs.open(__FILE__);
    ofstream ofs;
    ofs.open("fwrite.txt");
    one_instruction_write(ifs, ofs);
    return 0;
}
