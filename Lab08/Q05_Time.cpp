#include <iostream>
using namespace std;

class Time
{
    int hour, min, sec;

public:
    Time(int hr, int m, int s)
    {
        hour = hr;
        min = m;
        sec = s;
    }
    int operator==(Time t)
    {
        if (hour == t.hour && min == t.min && sec == t.sec)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    Time t1(4, 30, 49);
    Time t2(4, 45, 49);
    if (t1 == t2)
    {
        cout << "\nSame Time";
    }
    else
    {
        cout << "\nDiffrent Time";
    }
}