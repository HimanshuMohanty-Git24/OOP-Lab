// 9.WAP to check whether a number n is prime number or not.
#include <iostream>
using namespace std;

int main()
{
    int i, num, count = 0;
    cout << "Enter the number to check prime or not:";
    cin >> num;
    cout << endl;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "This is a prime number" << endl;
    }
    else
        cout << "This is not a prime number" << endl;
    return 0;
    return 0;
}
