#include <iostream>
using namespace std;

class sample
{
    int a, b, c;

public:
    sample(int x = 10, int y = 20, int z = 30)
    {
        a = x;
        b = y;
        c = z;
    }
    void show()
    {
        cout << "a= " << a << endl;
        cout << "b= " << b << endl;
        cout << "c= " << c << endl;
    }
};
int main()
{
    sample s1;
    sample s2(5, 4);
    sample s3(5);
    s1.show();
    s2.show();
    s3.show();
    return 0;
}