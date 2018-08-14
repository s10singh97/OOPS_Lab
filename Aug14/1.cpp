// Swapping using reference

# include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    void swap(int&, int&);
    cout<<"Enter two numbers";
    int a, b;
    cin>>a>>b;
    swap(a, b);
    cout<<a<<b;
    return 0;
}

void swap(int &p, int &q)
{
    int t = p;
    p = q;
    q = t;
}
