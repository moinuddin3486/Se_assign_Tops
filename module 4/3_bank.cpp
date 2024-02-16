#include <iostream>
using namespace std;
class bank
{
    public:
    char name[50], actype;
    int balance, acno, deposite, withdrow;
     bank()
    {
        cout << "\nEnter your name";
        cin >> name;
        cout << "\nEnter your accont number :";
        cin >> acno;
        cout << "\nEnter your accout type";
        cin >> actype;
        cout << "\nEnter your balance :";
        cin >> balance;
    }
    void credit()
    {
        cout << "\nEnter your deposite amont:";
        cin >> deposite;
        balance += deposite;
    }
    void debit()
    {
        cout << "\nEnter your withdrow amont :";
        cin >> withdrow;
        if (balance >= withdrow)
        {
            balance -= withdrow;
        }
        else
        {
            cout<<"\nInsuficiant balance in your accont!!!!";
        }
    }
    void print()
    {
        cout<<"\nname="<<name;
        cout<<"\naccount number ="<<acno;
        cout<<"\nbalance="<<balance;
    }
};
int main()
{
    bank moin;
    moin.credit();
    moin.debit();
    moin.print();

    

    

}
