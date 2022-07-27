#include <iostream>

using namespace std;

void fact(int &n, int &o)
{
    int temp;
    temp = n;
    n = o;
    o = temp;
}
int main()
{
    int a, b;
    cout << "Enter 2 nos:";
    cin >> a >> b;
    fact(a, b);
    cout << a << " " << b << endl;
    return 0;
}
