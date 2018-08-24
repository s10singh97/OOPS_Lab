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
    void deposit();
    void withdraw();
    void display();
};

void BankAccount::init()
{
    cout<<"Enter name :- ";
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

void BankAccount::deposit()
{
    float deposit_amount;
    cout<<"Enter Deposit amount :- ";
    cin>>deposit_amount;
    balance_amount += deposit_amount;
    cout<<"Deposit Balance :- "<<balance_amount<<"\n";
}

void BankAccount::withdraw()
{
    cout<<"Balance Amount :- "<<balance_amount<<"\n";
    cout<<"Enter Withdraw Amount :- ";
    cin>>withdrawal_amount;
    if (withdrawal_amount > balance_amount)
    {
        cout<<"ERROR....Withdrawal Amount cannot be greater than Balance Amount\n";
    }
    else
    {
        balance_amount -= withdrawal_amount;
        cout<<"After Withdraw Balance is :- "<<balance_amount<<"\n";
    }
}

void BankAccount::display()
{
    cout<<"\t\"Details\"\n";
    cout<<"name "<<name<<"\n";
    cout<<"A/c no "<<account_no<<"\n";
    cout<<"A/c Type "<<acc_type<<"\n";
    cout<<"Balance "<<balance_amount<<"\n";
}

int main(int argc, char const *argv[])
{
    BankAccount customer;
    bool a = true;
    while(a)
    {
        int i;
        cout<<"\nCHOICE LIST\n";
        cout<<"1) To assign initial value\n";
        cout<<"2) To Deposit\n";
        cout<<"3) To Withdraw\n";
        cout<<"4) To Display all Details\n";
        cout<<"5) Exit\n";
        cout<<"\tEnter your choice :- ";
        cin>>i;
        switch(i)
        {
            case 1: customer.init();
                    break;
            case 2: customer.deposit();
                    break;
            case 3: customer.withdraw();
                    break;
            case 4: customer.display();
                    break;
            case 5: cout<<"Exit from Program Control\n";
                    a = false;
                    break;
        }
    }
    return 0;
}
