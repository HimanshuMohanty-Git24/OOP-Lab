#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a no:";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "This is a even number" << endl;
    }
    else
    {
        cout << "This is a odd number" << endl;
    }
    return 0;
}
