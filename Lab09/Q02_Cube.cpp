#include <iostream>
#include <math.h>
using namespace std;
class Cube
{
    int side;

public:
    Cube(){};
    Cube(int a)
    {
        side = a;
    }
    friend Cube operator+(Cube c1, Cube c2);
    void volume()
    {
        int vol = pow(side, 3);
        cout << "\nVolume of cube is:" << vol << endl;
    }
};
Cube operator+(Cube c1, Cube c2)
{
    Cube t;
    t.side = c1.side + c2.side;
    return t;
}
int main()
{
    cout << "\nCube 1:\n";
    Cube c1(4);
    c1.volume();
    cout << "\nCube 2:\n";
    Cube c2(6);
    c2.volume();
    cout << "\nCube 3:\n";
    Cube c3 = c1 + c2;
    c3.volume();
}