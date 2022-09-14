#include <iostream>
using namespace std;
class number
{
private:
    int num1, num2;

public:
    number(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }
    void display()
    {
        cout << "a=" << num1 << " "
             << "b=" << num2;
    }
    friend void swap(number s1);
};
void swap(number s1)
{
    int temp;
    temp = s1.num1;
    s1.num1 = s1.num2;
    s1.num2 = temp;
    cout << "a=" << s1.num1 << " "
         << "b=" << s1.num2;
}
int main()
{
    number n(4, 6);
    cout << "Before Swap:" << endl;
    n.display();
    cout << "\nAfter Swap:" << endl;
    swap(n);
}