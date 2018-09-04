// Transpose 3X3 matrix

#include<iostream>
using namespace std;

class Matrix
{
    int a[3][3];
    public:
    void input()
    {
        cout<<"Enter the numbers\n";
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cin>>a[i][j];
            }
        }
    }
    friend Matrix out( Matrix);
    void show()
    {
        cout<<"\n";
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    
};

Matrix out( Matrix m)
{
    Matrix m1;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            m1.a[i][j] = m.a[j][i];
        }
    }
    return m1;
}

int main(int argc, char const *argv[])
{
    Matrix m;
    m.input();
    m.show();
    Matrix m1 = out(m);
    m1.show();
    return 0;
}
