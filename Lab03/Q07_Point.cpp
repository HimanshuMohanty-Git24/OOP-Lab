#include <iostream>
#include <math.h>
using namespace std;
class Points
{
private:
    float x, y;

public:
    void getData()
    {
        cout << "Enter the x Coordinate:";
        cin >> x;
        cout << "Enter the y Coordinate:";
        cin >> y;
    }
    void calc(Points p1, Points p2)
    {
        float sqr, dis;
        sqr = pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2);
        dis = sqrt(sqr);
        cout << "Distance Between 2 point:" << dis;
    }
};
int main()
{
    Points p1, p2, p3;
    cout << "Point 1\n";
    p1.getData();
    cout << endl;
    cout << "Point 2\n";
    p2.getData();
    cout << endl;
    p3.calc(p1, p2);
}