// 10.C++ class Program to perform rational number arithmetic
#include <iostream>

using namespace std;

class Rational
{
    int num, den;

public:
    void read()
    {
        cout << "Enter Numerator" << endl;
        cin >> num;
        cout << "Enter Denominator" << endl;
        cin >> den;
    }
    void add(Rational a, Rational b)
    {
        num = a.num * b.den + a.den * b.num;
        den = a.den * b.den;
        hcf();
        cout << "Addition Completed" << endl;
    }
    void sub(Rational a, Rational b)
    {
        num = a.num * b.den - a.den * b.num;
        den = a.den * b.den;
        hcf();
        cout << "Subtraction Completed" << endl;
    }
    void mult(Rational a, Rational b)
    {
        num = a.num * b.num;
        den = a.den * b.den;
        hcf();
        cout << "Multiplication Completed" << endl;
    }
    void div(Rational a, Rational b)
    {
        num = a.num * b.den;
        den = a.den * b.num;
        hcf();
        cout << "Division Completed" << endl;
    }
    int hcf()
    {
        int a, b, c;
        a = num;
        b = den;
        do
        {
            c = a % b;
            a = b;
            b = c;
        } while (c != 0);
        num = num / a;
        den = den / a;
    }
    void print()
    {
        cout << "Result is : " << num << "/" << den << endl;
    }
};

int main()
{
    Rational r1, r2, r3;
    r1.read();
    r2.read();
    r3.add(r1, r2);
    r3.print();
    r3.sub(r1, r2);
    r3.print();
    r3.mult(r1, r2);
    r3.print();
    r3.div(r1, r2);
    r3.print();
}