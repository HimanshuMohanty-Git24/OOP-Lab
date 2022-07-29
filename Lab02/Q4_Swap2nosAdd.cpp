// Swap by Address
#include <iostream>

using namespace std;

void fact(int *n, int *o)
{
    int temp;
    temp = *n;
    *n = *o;
    *o = temp;
}
int main()
{
    int a, b;
    cout << "Enter 2 nos:";
    cin >> a >> b;
    cout << "a:" << a << " b:" << b << endl;
    fact(&a, &b);
    cout << "After Swap" << endl;
    cout << "a:" << a << " b:" << b << endl;
    return 0;
}
