// Swap by Value
#include <iostream>

using namespace std;

void fact(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After Swap" << endl;
    cout << "a:" << a << " b:" << b << endl;
}
int main()
{
    int a, b;
    cout << "Enter 2 nos:";
    cin >> a >> b;
    cout << "a:" << a << " b:" << b << endl;
    fact(a, b);
    return 0;
}
