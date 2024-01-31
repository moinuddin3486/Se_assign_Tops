/*
Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/
#include <iostream>
using namespace std;
class bankaccont
{
public:
    int acnum, balance;

public:
    bankaccont()
    {
        cout << "Enter your accont number :";
        cin >> acnum;
        cout << "Enter your balance :";
        cin >> balance;
    }
    void deposite(int d)
    {
        balance = balance + d;
    }
    void withdraw(int w)
    {
        if (balance >= w)
        {
            balance = balance - w;
        }
        else
        {
            cout << "Insificeant balance!!!"<<endl;
        }
    }
    void print()
    {
        cout << "Accont number =" << acnum << endl;
        cout << "Balance=" << balance;
    }
};
int main()
{
    int debit, credit;
    bankaccont c1;

    cout << "Enter your deposite amount:";
    cin >> credit;
    c1.deposite(credit);
    cout << "\nEnter your withdrow amont ";
    cin >> debit;
    c1.withdraw(debit);
    c1.print();
}