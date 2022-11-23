/*1.Create a class which stores employee name,id and salary Derive two classes from
‘Employee’ class: ‘permanent’ and ‘contractual’. The ‘Permanent’ class stores DA, and basic salary.
The ‘contractual’ class stores the number of hours and pay per hour.
Calculate the salary of a regular employee and a par-time employee.*/
// SET-3
// Himanshu Mohanty
// 2105719
// CSE-36
#include <iostream>

using namespace std;

class Employee
{
protected:
    string name;
    int id;
    double salary;

public:
    void get_data()
    {
        cout << "Enter name:";
        cin >> name;
        cout << "Enter ID:";
        cin >> id;
    }
};

class permanent : public Employee
{
private:
    double DA;
    double HRA;
    double basic_salary;

public:
    permanent(double d, double h, double b)
    {
        DA = d;
        HRA = h;
        basic_salary = b;
    }
    void display()
    {
        cout << "\nSalary of the permanent employee is: " << (DA + HRA + basic_salary);
    }
};

class contractual : public Employee
{
private:
    int number_of_hours;
    double pay_per_hour;

public:
    contractual(int n, double p)
    {
        number_of_hours = n;
        pay_per_hour = p;
    }
    void display()
    {
        cout << "\nSalary of the part-time employee is: " << (number_of_hours * pay_per_hour);
    }
};

int main()
{
    Employee eR, eP;
    cout << "Enter detail of permanent employee" << endl;
    eR.get_data();
    permanent r(2000, 3000, 10000);
    r.display();

    cout << "\nEnter Detail of Part-Time Employee" << endl;
    eP.get_data();
    contractual p(8, 800);
    p.display();

    return 0;
}