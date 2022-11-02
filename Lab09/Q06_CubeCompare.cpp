#include <iostream>
#include <math.h>
using namespace std;
class Cube
{
    int side;
    int vol;

public:
    Cube(){};
    Cube(int a)
    {
        side = a;
    }
    friend Cube operator+(Cube c1, Cube c2);
    void volume()
    {
        vol = pow(side, 3);
        cout << "\nVolume of cube is:" << vol << endl;
    }
    friend int operator>(Cube c1, Cube c2);
};
Cube operator+(Cube c1, Cube c2)
{
    Cube t;
    t.side = c1.side + c2.side;
    return t;
}
int operator>(Cube c1, Cube c2)
{
    if (c1.vol > c2.vol)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    cout << "\nCube 1:\n";
    Cube c1(4);
    c1.volume();
    cout << "\nCube 2:\n";
    Cube c2(6);
    c2.volume();
    if (c1 > c2)
    {
        cout << "Cube 1 is greater than Cube 2" << endl;
    }
    else
    {
        cout << "\nCube 2 is greater than Cube 1" << endl;
    }
    // cout << "\nCube 3:\n";
    // Cube c3 = c1 + c2;
    // c3.volume();
}