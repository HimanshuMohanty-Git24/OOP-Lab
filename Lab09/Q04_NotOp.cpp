#include <iostream>
using namespace std;
class Num
{
    int num;

public:
    Num(){};
    Num(int n)
    {
        num = n;
    }
    friend int operator!=(Num c1, Num c2);
};
int operator!=(Num c1, Num c2)
{
    if (c1.num == c2.num)
    {
        return 0;
    }
    else if (c1.num != c2.num)
    {
        return 1;
    }
}
int main()
{
    Num n1(4);
    Num n2(4);
    if (n1 != n2)
    {
        cout << "\nDiffrent number\n";
    }
    else
    {
        cout << "\nSame number\n";
    }
}