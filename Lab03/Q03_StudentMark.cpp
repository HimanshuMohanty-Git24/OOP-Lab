#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int roll;
    int m1, m2, m3, m4, m5;

public:
    void getData()
    {
        cout << "Enter  yor name:";
        getline(cin, name);
        cout << "Enter your roll number:";
        cin >> roll;
        cout << "Enter the marks in first subject:";
        cin >> m1;
        cout << "Enter the marks in second subject:";
        cin >> m2;
        cout << "Enter the marks in third subject:";
        cin >> m3;
        cout << "Enter the marks in fourth subject:";
        cin >> m4;
        cout << "Enter the marks in fifth subject:";
        cin >> m5;
    }
    int totalmark()
    {
        return (m1 + m2 + m3 + m4 + m5);
    }
    float percentage()
    {
        float per;
        per = ((float)totalmark() / 500) * 100;
        return per;
    }
    void putData()
    {
        cout << "Name:" << name << endl;
        cout << "Roll No. :" << roll << endl;
        cout << "Total marks:" << totalmark() << endl;
        cout << "Percentage:" << percentage() << "%" << endl;
    }
};

int main()
{
    Student s1;
    s1.getData();
    cout << endl;
    s1.putData();

    return 0;
}
