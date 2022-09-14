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
class test
{
protected:
    int m[5];
    int i;

public:
    void getdata()
    {
        cout << "\nEnter marks of 5 subject: ";
        for (i = 0; i < 5; i++)
        {
            cin >> m[i];
        }
    }
    void putdata()
    {
        cout << "\nEntered Marks are: " << endl;
        for (i = 0; i < 5; i++)
        {
            cout << m[i] << " ";
        }
        cout << endl;
    }
};
class result : public student, public test
{
    float total = 0, per;

public:
    void getresult()
    {
        for (int i = 0; i < 5; i++)
        {
            total = total + m[i];
        }
        per = (total / 500) * 100;
    }
    void putresult()
    {
        cout << "Total=" << total << endl;
        cout << "Percentage=" << per << endl;
    }
};
int main()
{
    result r;
    r.input();
    r.getdata();
    r.getresult();
    r.display();
    r.putdata();
    r.putresult();
    return 0;
}