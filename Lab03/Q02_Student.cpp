#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int roll;
    int total_marks;

public:
    void getData()
    {
        cout << "Enter  yor name:";
        getline(cin, name);
        cout << "Enter your roll number:";
        cin >> roll;
        cout << "Enter total mark of student:";
        cin >> total_marks;
    }
    void putData()
    {
        cout << "Name:" << name << endl;
        cout << "Roll No. :" << roll << endl;
        cout << "Total marks:" << total_marks << endl;
    }
};

int main()
{
    Student s1;
    s1.getData();
    s1.putData();

    return 0;
}
