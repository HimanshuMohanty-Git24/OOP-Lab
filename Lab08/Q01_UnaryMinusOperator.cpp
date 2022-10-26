#include <iostream>
using namespace std;

class Number
{
private:
    int x, y, z;

public:
    Number() {}
    Number(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void operator-() // member function
    {
        x = -x;
        y = -y;
        z = -z;
    }
    void display()
    {
        cout << "X:" << x << endl
             << "Y:" << y << endl
             << "Z:" << z << endl;
    }
};

int main()
{
    cout << "\nBefore negative operator:\n";
    Number n1(10, -20, 30);
    n1.display();
    cout << endl;
    cout << "\nAfter negative operator:\n";
    -n1;
    n1.display();
}