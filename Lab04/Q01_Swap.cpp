#include <iostream>

using namespace std;
class Number
{
private:
    int a;
    int b;

public:
    void getData()
    {
        cout << "Enter value of a:";
        cin >> a;
        cout << "Enter value of b:";
        cin >> b;
    }
    friend void swap(Number n);
};
void swap(Number n)
{
    cout << "\nBefore Swap\n"
         << "a:" << n.a << "\nb:" << n.b;
    int temp;
    temp = n.a;
    n.a = n.b;
    n.b = temp;
    cout << "\nAfter Swap\n"
         << "a:" << n.a << "\nb:" << n.b;
}
int main()
{
    Number n;
    n.getData();
    swap(n);
    return 0;
}
