#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    friend istream &operator>>(istream &in, Complex &c);
    friend ostream &operator<<(ostream &out, Complex &c);
};
istream &operator>>(istream &in, Complex &c) // extraction operator
{
    cout << "Enter the real part :";
    in >> c.real;
    cout << "Enter the imaginary part:";
    in >> c.img;
    return in;
}
ostream &operator<<(ostream &out, Complex &c)
{
    out << c.real << "+i" << c.img << endl;
    return out;
}
int main()
{
    Complex c;
    cin >> c;
    cout << "The complex number is:";
    cout << c;
}