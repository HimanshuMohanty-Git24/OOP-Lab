// 7.WAP to calculate the sum of digits of a given number.
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, r, sum = 0;
    cout << "Enter a no. ";
    cin >> n;
    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r;
    }
    cout << "Sum of digit of number is :" << sum << endl;
    return 0;
}
