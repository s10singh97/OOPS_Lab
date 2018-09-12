#include<iostream>
#include<fstream>
using namespace std;

void fileLines(int n, string file)
{
    string a;
    ifstream ifs;
    ifs.open(file);
    if(!ifs)
    {
        cout<<"Unable to Open File\n"<<endl;
        exit(1);
    }
    while(n)
    {
        getline(ifs, a);
        cout<<a<<endl;
        n--;
    }
}

int main(int argc, char const *argv[])
{
    string a;
    int n;
    cout<<"Enter the name of the file";
    cin>>a;
    cout<<"Enter number of Lines\n";
    cin>>n;
    fileLines(n, a);
    return 0;
}
