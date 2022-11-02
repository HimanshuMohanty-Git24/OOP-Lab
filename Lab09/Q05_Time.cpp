#include <iostream>
using namespace std;

class Time
{
    int hour, min, sec;

public:
    friend istream &operator>>(istream &o, Time &t);
    friend ostream &operator<<(ostream &o, Time &t);
};

istream &operator>>(istream &o, Time &t)
{
    cout << "\nEnter hour,minute,second : ";
    o >> t.hour >> t.min >> t.sec;
}

ostream &operator<<(ostream &o, Time &t)
{
    cout << "\nHour : ";
    o << t.hour;
    cout << "\nMinute : ";
    o << t.min;
    cout << "\nSecond : ";
    o << t.sec;
}

int main()
{
    Time t1;
    cin >> t1;
    cout << t1;
    return 0;
}