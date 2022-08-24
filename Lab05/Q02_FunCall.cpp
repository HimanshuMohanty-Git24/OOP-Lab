#include <iostream>
using namespace std;
class myClass
{
private:
    int num;

public:
    void get_data()
    {
        cout << "\nEnter the number : ";
        cin >> num;
    }
    void set_data(myClass o2)
    {
        num = o2.num;
    }
    void set_data(int a, myClass &o2)
    {
        num = o2.num;
    }
    void set_data(myClass *o2)
    {
        num = o2->num; // pointer access operator
    }
    void show_data()
    {
        cout << "\n Num = " << num;
    }
};
int main()
{
    myClass o1, o2, o3, o4;
    int a = 0;
    o2.get_data();
    o1.set_data(o2);    // Call by value
    o3.set_data(&o2);   // Call by address
    o4.set_data(a, o2); // Call by refrence
    o1.show_data();
    o2.show_data();
    o3.show_data();
    return 0;
}