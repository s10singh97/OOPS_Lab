#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

class MonthError
{
    public:
    string a;
    MonthError()
    {
        a = " ";
    }
    MonthError(string b)
    {
        a = b;
    }
};

class DateError
{
    public:
    string a;
    DateError()
    {
        a = " ";
    }
    DateError(string b)
    {
        a = b;
    }
};

class Date
{
    int day, month;
    public:
    Date(int a = 0, int b = 0)
    {
        day = 0; month = 0;
    }
    friend void input(Date & d);
    friend void output(Date &d);
};

int str2int(string md)
{
    md.erase(remove(md.begin(), md.end(), '/'), md.end());
    return stoi(md);
}

void day_check(int int_md, int mon)
{
    int mm = int_md % 100;
    if(mm < 1 || mm > 31)
        throw(DateError("Date beyond Limits\n"));
    else if(mon == 2 && mm > 29)
        throw(DateError("February has only 29 days..\n"));
    else if(mon == 4 && mm > 30)
        throw(DateError("April has only 30 days...\n"));
    else if(mon == 6 && mm > 30)
        throw(DateError("June has only 30 days...\n"));
    else if(mon == 9 && mm > 30)
        throw(DateError("September has only 30 days...\n"));
    else if(mon == 11 && mm > 30)
        throw(DateError("November has only 30 days...\n"));
}

void input(Date & d)
{
    cout<<"Enter month/day: ";
    string md;
    cin>>md;
    int int_md = str2int(md);
    int dd = int_md / 100;
    if(dd < 1 || dd > 12)
        throw(MonthError("Enter a pure month\n"));
    day_check(int_md, dd);
    d.day = int_md % 100;
    d.month = dd;
}

string getmonth(int month)
{
    switch(month)
    {
        case 1: return "January";
                break;
        case 2: return "February";
                break;
        case 3: return "March";
                break;
        case 4: return "April";
                break;
        case 5: return "May";
                break;
        case 6: return "June";
                break;
        case 7: return "July";
                break;
        case 8: return "August";
                break;
        case 9: return "September";
                break;
        case 10: return "October";
                break;
        case 11: return "November";
                break;
        case 12: return "December";
                break;
    }
}

void output(Date &d)
{
    int month_2;
    month_2 = d.month;
    cout<<"That is same as: "<<getmonth(month_2)<<" "<<d.day;
}

int main(int argc, char const *argv[])
{
    char ch;
    string a;
    try{
        do{
            Date d;
            input(d);
            output(d);
            cout<<"\nAgain? [y/N]: ";
            cin>>ch;
        }while(ch == 'y' || ch == 'Y');
    }
    catch(MonthError m)
    {
        cout<<"Invalid Month..."<<m.a<<"\n";
    }
    catch(DateError s)
    {
        cout<<"Invalid Date..."<<s.a<<"\n";
    }
    catch(...)
    {
        cout<<"Unknown Error...\n";
    }
    return 0;
}