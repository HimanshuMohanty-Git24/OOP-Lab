#include <iostream>
#include <cmath>
using namespace std;
class number
{
private:
    int num;

public:
    number(int n)
    {
        num = n;
    }
    friend void cube(number n);
};
void cube(number n)
{
    for (int i = 1; i <= n.num; i++)
    {
        cout << pow(i, n.num) << " ";
    }
}
int main()
{
    number n(3);
    cube(n);
}
