#include <iostream>
#include <conio.h>
using namespace std;
class emp
{
public:
    int eid;
    float bsal, hra, da, gsal;
    char name[10];
    void accept(int i)
    {
        cout << "Employee Number " << i + 1 << endl;
        cout << "Enter employee id: ";
        cin >> eid;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter basic salary: ";
        cin >> bsal;
    }
    void disp(int i)
    {
        cout << "Employee Number " << i + 1 << endl;
        cout << "employee id: " << eid << endl;
        cout << "employee name: " << name << endl;
        cout << "basic salary: " << bsal << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "Gross salary: " << gsal << endl;
    }
    void cal()
    {
        hra = ((10.0 / 100) * bsal);
        da = ((80.0 / 100) * bsal);
        gsal = bsal + hra + da;
    }
};
int main()
{
    int n;
    cout << "Enter the number of employee:";
    cin >> n;
    emp e[n];
    for (int i = 0; i < n; i++)
    {
        e[i].accept(i);
        e[i].cal();
        cout << endl;
    }
    cout << "\nEntered Data\n";
    for (int i = 0; i < n; i++)
    {
        e[i].disp(i);
        cout << endl;
    }

    return (0);
}