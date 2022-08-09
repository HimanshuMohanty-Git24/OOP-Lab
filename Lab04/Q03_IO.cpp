#include <iostream>

using namespace std;
class Integer
{
private:
    int num;
    static int InpCount;
    static int OutCount;

public:
    void input()
    {
        cout << "Enter the Integer:";
        cin >> num;
        InpCount++;
    }
    void output()
    {
        cout << "The input number is:" << num << endl;
        OutCount++;
    }
    static void Display()
    {
        cout << "Number of inputs:" << InpCount << endl;
        cout << "Number of outputs:" << OutCount << endl;
    }
};
int Integer::InpCount;
int Integer::OutCount;
int main()
{
    Integer i1, i2, i3;
    i1.input();
    i1.output();
    cout << endl;
    i2.input();
    i2.output();
    cout << endl;
    i3.input();
    i3.output();
    cout << endl;
    Integer::Display();
    return 0;
}
