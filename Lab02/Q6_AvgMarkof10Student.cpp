// 6.Program to find average marks obtained by a class of 10 students in a test.
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float arr[10], total = 0, avg;
    cout << "Enter the marks of 10 student" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        total = total + arr[i];
    }
    avg = total / 10;
    cout << "Average marks obtained is:" << avg << endl;
    return 0;
}
