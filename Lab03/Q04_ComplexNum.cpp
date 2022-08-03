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
        cout << "Complex Number " << i + 1 << endl;
        cout << "Enter the real part :";
        cin >> real;
        cout << "Enter the imaginary part :";
        cin >> imaginary;
    }
    void putData(int i)
    {
        cout << "Complex Number " << i + 1 << ":" << real << "+" << imaginary << "i" << endl;
    }
};
int main()
{
    Complex c[10];
    for (int i = 0; i < 10; i++)
    {
        c[i].getData(i);
        cout << endl;
    }
    cout << "\nEntered Complex Number\n";
    for (int i = 0; i < 10; i++)
    {
        c[i].putData(i);
        cout << endl;
    }

    return 0;
}