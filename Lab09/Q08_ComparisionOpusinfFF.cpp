#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    void input()
    {
        cin >> num;
    }
    friend int operator==(Number n1, Number n2);
};
int operator==(Number n1, Number n2)
{
    if (n1.num == n2.num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    Number n1;
    cout << "\nNumber 1 : ";
    n1.input();
    Number n2;
    cout << "\nNumber 2 : ";
    n2.input();
    if (n1 == n2)
    {
        cout << "\nSame Number";
    }
    else
    {
        cout << "\nDiffrent Number";
    }
    return 0;
}