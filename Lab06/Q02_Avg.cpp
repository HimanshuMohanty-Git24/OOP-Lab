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
    friend void avg(number s1, Number s2);
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
    friend void avg(number s1, Number s2);
};
void avg(number s1, Number s2)
{
    float avg;
    avg = (float)(s1.num1 + s2.num2) / 2;
    cout << "Average of the data member of both class is:" << avg;
}
int main()
{
    number n1(8);
    Number n2(3);
    avg(n1, n2);
}