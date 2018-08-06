/* Pattern:
    *
    **
    ***
    ****
*/
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    cout<<"Enter the number of rows\n";
    int n;
    cin>>n;
    for(int i = 1; i < n + 1; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
