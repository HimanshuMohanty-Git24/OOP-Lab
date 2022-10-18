#include <iostream>
#include <string.h>
using namespace std;

class Account
{
private:
    int account_no;
    string name;

public:
    float balance;

    Account(int a, string n, float b)
    {
        account_no = a;
        n = name;
        balance = b;
    }
    void deposit(float amount)
    {
        balance += amount;
        cout << endl
             << "Balance deposited: " << amount << endl;
    }
    void display()
    {
        cout << "Account number: " << account_no << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Savings : public Account
{
private:
    float min_balance;

public:
    Savings(int a, string n, float b, float m) : Account(a, n, b)
    {
        min_balance = m;
    }
    void withdraw(float amount)
    {
        if (balance - amount < min_balance)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            balance -= amount;
            cout << endl
                 << "Balance withdrawn: " << amount << endl;
        }
    }
};

class Current : public Account
{
private:
    float overdue_amount;

public:
    Current(int a, string n, float b, float o) : Account(a, n, b)
    {
        overdue_amount = o;
    }
    void withdraw(float amount)
    {
        if (balance - amount < overdue_amount)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            balance -= amount;
            cout << endl
                 << "Balance withdrawn: " << amount << endl
                 << endl;
        }
    }
};

int main()
{
    Savings s(1, "Himanshu", 1200, 500);
    Current c(2, "Rahul", 1900, 500);
    s.deposit(1800);
    c.deposit(4300);
    s.withdraw(1700);
    c.withdraw(2000);
    s.display();
    c.display();
    return 0;
}