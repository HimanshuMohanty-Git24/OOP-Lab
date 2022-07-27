#include <iostream>

using namespace std;

void fact(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << a << " " << b << endl;
}
int main()
{
    int a, b;
    cout << "Enter 2 nos:";
    cin >> a >> b;
    fact(a, b);
    return 0;
}
