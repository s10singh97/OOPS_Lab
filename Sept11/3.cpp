// Reading Line by Line
#include<iostream>
#include<fstream>
using namespace std;

void read_line_by_line(fstream &file)
{
    string a = "";
    int i = 0;
    while(file)
    {
        getline(file, a);
        cout<<"Line "<<i<<" is: "<<a<<endl;
        i++;
    }
}

int main(int argc, char const *argv[])
{
    fstream a;
    a.open("line.txt", ios::in);
    read_line_by_line(a);
    return 0;
}
