#include <iostream>
using namespace std;
class number;
class Number;
class number
{
private:
    int num1;

public:
    number(int n1)
    {
        num1 = n1;
    }
    int get_num1()
    {
        return num1;
    }
    friend void swap(number s1, Number s2);
};
class Number
{
private:
    int num2;

public:
    Number(int n2)
    {
        num2 = n2;
    }
    int get_num2()
    {
        return num2;
    }
    friend void swap(number s1, Number s2);
};
void swap(number s1, Number s2)
{
    int temp = s1.num1;
    s1.num1 = s2.num2;
    s2.num2 = temp;
    cout << "\nAfter Swap\n";
    cout << "Value of num1:" << s1.num1 << " "
         << "Value of num2:" << s2.num2 << endl;
}
int main()
{
    number n1(4);
    Number n2(6);
    cout << "\nBefore Swap\n";
    cout << "Value of num1:" << n1.get_num1() << " "
         << "Value of num2:" << n2.get_num2() << endl;
    swap(n1, n2);
}