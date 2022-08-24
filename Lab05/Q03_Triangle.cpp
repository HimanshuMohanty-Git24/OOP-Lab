/*3.Write a program to print the area and perimeter of a triangle having
sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function
to print the area and perimeter.*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Triangle
{
private:
    int a;
    int b;
    int c;

public:
    void getData(int s1, int s2, int s3)
    {
        a = s1;
        b = s2;
        c = s3;
    }
    void calc()
    {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of triangle is:" << setprecision(2) << area << endl;
        int peri = a + b + c;
        cout << "Perimeter of triangle is:" << peri << endl;
    }
};
int main()
{
    Triangle t1;
    t1.getData(3, 4, 5);
    t1.calc();
    return 0;
}
