// Testing Input methods and Output Methods

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char* a;
    cin.get(a, 10, ' ');
    cout<<a<<"\n";
    char b[10];
    cin.getline(b, 10, '\t');
    cout<<b<<"\n";
    // char* c;
    // cin.ignore(' ');
    // cout<<c;
    int i;
    for (i = 0; a[i] != '\0'; i++);
    int len = i;
    for (i = 0; i < len; i++)
        cout.put(a[i]);
    return 0;
}
