#include <iostream>

using namespace std;
class student
{
public:
    int RollNo;
    double Marks;
    void getData();
    void display();
};
void student::getData()
{
    cout << "Enter your RollNo. :";
    cin >> RollNo;
    cout << "Enter your marks:";
    cin >> Marks;
}
void student::display()
{
    cout << RollNo << " " << Marks << endl;
}
int main(int argc, char const *argv[])
{
    int i;
    student st[5];
    for (int i = 0; i < 5; i++)
    {
        st[i].getData();
    }
    for (int i = 0; i < 5; i++)
    {
        st[i].display();
    }
    return 0;
}
