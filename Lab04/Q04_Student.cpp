#include <iostream>
#include <iomanip>
using namespace std;
class STUDENT
{
private:
    string name;
    int roll;
    int totalmarks;

public:
    void getData(int i)
    {
        cout << "\nSTUDENT " << (i + 1) << endl;
        cout << "Enter the student name:";
        cin >> name;
        cout << "Enter the student roll number:";
        cin >> roll;
        cout << "Enter the student Total marks:";
        cin >> totalmarks;
    }
    friend float AvgMark(int n, STUDENT s[]);
};
float AvgMark(int n, STUDENT s[])
{
    s[n];
    float sum = 0;
    float avg;
    for (int i = 0; i < n; i++)
    {
        sum = sum + s[i].totalmarks;
    }
    avg = sum / (float)n;
    return avg;
}
int main()
{
    int n, average;
    cout << "Enter the number of students:";
    cin >> n;
    cout << endl;
    STUDENT s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].getData(i);
        cout << endl;
    }
    cout << endl;
    average = AvgMark(n, s);
    cout << "The Average marks obtained by " << n << " student is:" << average;

    return 0;
}