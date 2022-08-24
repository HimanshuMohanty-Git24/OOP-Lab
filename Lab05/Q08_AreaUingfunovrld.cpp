// 8.Find the Area of shapes using function overloading circle triangle rectangle
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
class Shapes
{
public:
    int area(int len, int bre)
    {
        return (len * bre);
    }
    double area(int a, int b, int c)
    {
        double s = (a + b + c) / 2;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        return area;
    }
    double area(int rad)
    {
        return (3.14 * pow(rad, 2));
    }
};
int main()
{
    Shapes circle, triangle, rectangle;
    cout << "Area of circle is:" << circle.area(4) << endl;
    cout << "Area of triangle is:" << triangle.area(3, 4, 5) << endl;
    cout << "Area of rectangle is:" << rectangle.area(10, 20) << endl;
    return 0;
}
