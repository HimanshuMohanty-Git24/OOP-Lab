#include <iostream>
using namespace std;

class student
{
    string name;
    int roll;
    int age;

public:
    void input()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enetr age: ";
        cin >> age;
    }
    void display()
    {
        cout << "Name=" << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Age: " << age;
    }
};
class test : public student
{
    int m[5];
    int i;

public:
    void getdata()
    {
        cout << "\nEnter marks of 5 subject: ";
        for (i = 0; i < 4; i++)
        {
            cin >> m[i];
        }
    }
    void putdata()
    {
        cout << "\nEntered Marks are: " << endl;
        for (i = 0; i < 4; i++)
        {
            cout << m[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    test t1;
    t1.input();
    t1.getdata();
    t1.display();
    t1.putdata();
    return 0;
}