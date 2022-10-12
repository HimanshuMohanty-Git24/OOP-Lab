#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int roll;
    int age;
};

class Test : virtual public Student
{
protected:
    int marks1, marks2, marks3, marks4, marks5;

public:
    Test(int m1, int m2, int m3, int m4, int m5)
    {
        marks1 = m1;
        marks2 = m2;
        marks3 = m3;
        marks4 = m4;
        marks5 = m5;
    }
    void show()
    {
        cout << "The marks are:" << marks1 << "," << marks2 << "," << marks3 << "," << marks4 << " & " << marks5 << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int score;

public:
    Sports(int s)
    {
        score = s;
    }
    void show()
    {
        cout << "Sports Score = " << score << endl;
    }
};

class Result : public Test, Sports
{
public:
    Result(string n, int a, int r, int m1, int m2, int m3, int m4, int m5, int s) : Test(m1, m2, m3, m4, m5), Sports(s)
    {
        name = n;
        roll = r;
        age = a;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Roll : " << roll << endl;
        Test::show();
        Sports::show();
        cout << "Total Marks : " << marks1 + marks2 + marks3 + marks4 + marks5 + score << endl;
        cout << "Percentage:" << ((float)(marks1 + marks2 + marks3 + marks4 + marks5 + score) / 600) * 100 << "%" << endl;
    }
};

int main()
{
    Result R("Himanshu", 19, 2105719, 90, 95, 96, 89, 78, 75);
    R.show();
    return 0;
}