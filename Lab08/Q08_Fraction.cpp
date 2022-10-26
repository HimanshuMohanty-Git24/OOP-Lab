#include <iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction(int n, int d)
    {
        numerator = n;
        denominator = d;
    }
    int operator==(Fraction f)
    {
        if (numerator == f.numerator && denominator == f.denominator)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Fraction f1(2, 4);
    Fraction f2(2, 5);
    if (f1 == f2)
    {
        cout << "Same fraction";
    }
    else
    {
        cout << "Diffrent fraction";
    }
}