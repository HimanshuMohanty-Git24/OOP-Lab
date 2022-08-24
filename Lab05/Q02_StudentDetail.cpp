/*2.Assign and print the roll number, phone number and address of two students having names
 "Sam" and "John" respectively by creating two objects of the class 'Student'.*/
#include <iostream>

using namespace std;
class Student
{
public:
    string name;
    int roll_no;
    long phonenum;
    string address;
    void display()
    {
        cout << "Student name:" << name << endl;
        cout << "Student Roll number:" << roll_no << endl;
        cout << "Student phone number:" << phonenum << endl;
        cout << "Student address is:" << address << endl;
        cout << endl;
    }
};
int main(int argc, char const *argv[])
{
    Student s1, s2;
    s1.name = "Sam";
    s1.roll_no = 21;
    s1.phonenum = 1234567890;
    s1.address = "BBSR";
    s2.name = "John";
    s2.roll_no = 22;
    s2.phonenum = 1234561234;
    s2.address = "DELHI";
    s1.display();
    s2.display();
    return 0;
}
