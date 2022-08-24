/*7.Print the sum, difference and product of two complex numbers by creating a class named
'Complex' with separate functions for each operation whose real and imaginary parts are entered
by the user.*/
#include <iostream>

using namespace std;
class Complex
{
private:
    int real;
    int imaginary;

public:
    void getData(int i)
    {
        cout << "\nComplex Number " << i + 1 << endl;
        cout << "Enter the real part of complex number:";
        cin >> real;
        cout << "Enter the imaginary part of complex number:";
        cin >> imaginary;
    }
    void addComplex(Complex c2)
    {
        Complex t;
        t.real = real + c2.real;
        t.imaginary = imaginary + c2.imaginary;
        cout << "After adding the both complex number:" << t.real << "+" << t.imaginary << "i" << endl;
    }
    void subComplex(Complex c2)
    {
        Complex t;
        t.real = real - c2.real;
        t.imaginary = imaginary - c2.imaginary;
        cout << "After subtracting the both complex number:" << t.real << "+" << t.imaginary << "i" << endl;
    }
    void mulComplex(Complex c2)
    {
        Complex t;
        t.real = ((real * c2.real) - (imaginary * c2.imaginary));
        t.imaginary = ((real * c2.imaginary) + (imaginary * c2.real));
        cout << "After product of both complex number:" << t.real << "+" << t.imaginary << "i" << endl;
    }
};
int main()
{
    Complex c[2];
    for (int i = 0; i < 2; i++)
    {
        c[i].getData(i);
    }
    c[0].addComplex(c[1]);
    c[0].subComplex(c[1]);
    c[0].mulComplex(c[1]);
    return 0;
}
