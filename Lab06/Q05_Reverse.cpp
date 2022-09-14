#include <iostream>
using namespace std;

class reverse
{
private:
    int num;

public:
    reverse(int n)
    {
        num = n;
    }
    friend void rev(reverse n);
};
void rev(reverse n)
{
    int r;
    while (n.num != 0)
    {
        r = n.num % 10;
        n = n.num / 10;
        cout << r;
    }
}
int main()
{
    reverse n(69420);
    rev(n);
}