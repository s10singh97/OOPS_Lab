// Inheritance using virtual functions
#include<iostream>
using namespace std;

class Account
{
    protected:
    float num, balance = 0;
    public:
    virtual void withdraw(float amount) = 0;
    virtual void deposit(float amount) = 0;
    float display_balance() const
    {
        return balance;
    }
};

class DepositAccount: public Account
{
    float fees;
    public:
    DepositAccount()
    {
        fees = 10;
    }
    void withdraw(float amount)
    {
        if ((amount + fees) < balance)
            balance = balance - amount - fees;
        else
            cout<<"Insufficient balance";
    }
    void deposit(float amount)
    {
        balance = balance + amount;
    }
};

class CreditAccount: public Account
{
    float credit_limit;
    public:
    CreditAccount()
    {
        credit_limit = 1000;
    }
    void withdraw(float amount)
    {
        if((balance - amount) < (-1*credit_limit))
            cout<<"Insufficient balance even after credit limit!!";
        else
            balance = balance - amount;
    }
    void deposit(float amount)
    {
        balance = balance + amount;
    }
};

int main(int argc, char const *argv[])
{
    Account *a = new DepositAccount();
    Account *b = new CreditAccount();
    char c;
    do{
        int ch;
        cout<<"\nChoose one of the following accounts to proceed\n";
        cout<<"1. Deposit Account\n2. Credit Account\n";
        cin>>ch;
        switch(ch)
        {
            int f;
            case 1: cout<<"\t########## DEPOSIT ACCOUNT ##########";
                    cout<<"1. Deposit Amount\n2. Withdraw Amount\n3. Show Balance";
                    cin>>f;
                    if(f == 1)
                    {
                        float deposit_amount;
                        cout<<"Enter amount to be deposited: ";
                        cin>>deposit_amount;
                        a -> deposit(deposit_amount);
                    }
                    else if(f == 2)
                    {
                        float withdraw_amount;
                        cout<<"\nEnter amount to be withdrawed from Deposit Account(extra 10 rupee will be deducted as withdrawal fees): ";
                        cin>>withdraw_amount;
                        a -> withdraw(withdraw_amount);
                    }
                    else if(f == 3)
                        cout<<"\nYour net balance is: "<<a -> display_balance();
                    else
                        cout<<"Invalid Choice!!! Exiting";
                        exit(1);
                    break;

            case 2: cout<<"\t########## CREDIT ACCOUNT ##########";
                    cout<<"1. Deposit Amount\n2. Withdraw Amount\n3. Show Balance";
                    cin>>f;
                    if(f == 1)
                    {
                        float deposit_amount;
                        cout<<"Enter amount to be deposited: ";
                        cin>>deposit_amount;
                        b -> deposit(deposit_amount);
                    }
                    else if(f == 2)
                    {
                        float withdraw_amount;
                        cout<<"\nEnter amount to be withdrawed from Deposit Account(extra 10 rupee will be deducted as withdrawal fees): ";
                        cin>>withdraw_amount;
                        b -> withdraw(withdraw_amount);
                    }
                    else if(f == 3)
                        cout<<"\nYour net balance is: "<<b -> display_balance();
                    else
                        cout<<"Invalid Choice!!! Exiting";
                        exit(1);
                    break;
            cout<<"Do you want to perform more operations?[y/N]";
            cin>>c;
        }
    }while(c == 'y' || c == 'Y');
    return 0;
}