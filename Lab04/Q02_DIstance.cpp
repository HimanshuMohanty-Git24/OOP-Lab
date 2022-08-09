#include <iostream>
using namespace std;
class Dif;
class Dcm
{
private:
    int cm;
    int m;

public:
    void getData()
    {
        cout << "Enter the value of m:";
        cin >> m;
        cout << "Enter the value of cm:";
        cin >> cm;
    }
    friend void compare(Dcm x, Dif y);
};
class Dif
{
private:
    int in;
    int ft;

public:
    void getData()
    {
        cout << "Enter the value of ft:";
        cin >> ft;
        cout << "Enter the value of in:";
        cin >> in;
    }
    friend void compare(Dcm x, Dif y);
};
void compare(Dcm x, Dif y)
{
    if ((y.ft * 0.3048) < x.m)
    {
        cout << "Distance in meters and centimers is larger\n";
    }
    else
    {
        cout << "Distance in inches and feet is larger\n";
    }
}
int main()
{
    Dcm x;
    x.getData();
    cout << endl;
    Dif y;
    y.getData();
    cout << endl;
    compare(x, y);
}