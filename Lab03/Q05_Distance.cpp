#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    int inch;

public:
    void getData()
    {
        cout << "Enter Value of feets :";
        cin >> feet;
        cout << "Enter value of inches :";
        cin >> inch;
    }
    void addDis(Distance a, Distance b)
    {
        feet = a.feet + b.feet;
        inch = a.inch + b.inch;
        if (inch >= 12)
        {
            feet++;
            inch -= 12;
        }
    }
    void Display()
    {
        cout << "Feets:" << feet << endl;
        cout << "Inches:" << inch << endl;
    }
};
int main()
{
    Distance x, y, z;
    cout << "Enter the distance for X\n";
    x.getData();
    cout << "\nEnter the distance for Y\n";
    y.getData();
    z.addDis(x, y);
    cout << "\nDistance Of Z\n";
    z.Display();
}