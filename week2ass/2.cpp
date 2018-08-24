#include<iostream>
using namespace std;
class BankAccount
{
    string name;
    int account_no;
    string acc_type;
    float withdrawal_amount;
    float balance_amount;
    public:
    void init();
    void display();
};

void BankAccount::init()
{
    cout<<"\nEnter name :- ";
    fflush(stdin);
    getline( cin, name);
    cout<<"Enter A/c no. :- ";
    cin>>account_no;
    cout<<"Enter A/c type :- ";
    fflush(stdin);
    getline( cin, acc_type);
    cout<<"Enter Opening Balance :- ";
    cin>>balance_amount;
}

void BankAccount::display()
{
    cout<<"\nname "<<name<<"\n";
    cout<<"A/c no "<<account_no<<"\n";
    cout<<"A/c Type "<<acc_type<<"\n";
    cout<<"Balance "<<balance_amount<<"\n";
}

int main(int argc, char const *argv[])
{
    BankAccount c[2];
    bool a = true;
    while(a)
    {
        int i, j;
        cout<<"\nCHOICE LIST\n";
        cout<<"1) To assign initial value\n";
        cout<<"2) To Display all Details\n";
        cout<<"3) Exit\n";
        cout<<"\tEnter your choice :- ";
        cin>>i;
        switch(i)
        {
            case 1: for(j = 0; j < 2; j++)
                        c[j].init();
                    break;
            case 2: cout<<"\n\t\"Details\"\n";
                    for(j = 0; j < 2; j++)
                        c[j].display();
                    break;
            case 3: cout<<"Exit from Program Control\n";
                    a = false;
                    break;
            default:cout<<"Exit from Program Control\n";
                    a = false;
                    break; 
        }
    }
    return 0;
}