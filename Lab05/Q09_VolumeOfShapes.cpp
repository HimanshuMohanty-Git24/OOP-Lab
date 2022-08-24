// 9.C++ program to find volume of cube, cylinder, sphere by function overloading
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Shape
{
public:
    int volume(int a, int b, int c)
    {
        return (a * b * c);
    }
    double volume(int r, int h)
    {
        double vol;
        vol = 3.14 * pow(r, 2) * h;
        return vol;
    }
    double volume(int r)
    {
        double vol;
        vol = ((4 / 3) * 3.14 * pow(r, 3));
        return vol;
    }
};
int main()
{
    Shape cube, cylinder, sphere;
    cout << "Volume of cube is:" << cube.volume(3, 3, 3) << endl;
    cout << "Volume of cylinder is:" << cylinder.volume(2, 4) << endl;
    cout << "VOlume of sphere is:" << sphere.volume(4) << endl;
    return 0;
}
