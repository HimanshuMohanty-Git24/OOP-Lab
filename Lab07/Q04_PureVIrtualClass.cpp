#include <iostream>

using namespace std;
class Base // Abstract Class or Interface Class
{
public:
    virtual void fun1() = 0; // Pure Virtual function
    virtual void fun2() = 0;
};
class Derived : public Base
{
public:
    void fun1()
    {
        cout << "fun1 of Derived" << endl;
    }
    void fun2()
    {
        cout << "fun2 of Derived" << endl;
    }
};
int main()
{
    Base *b;
    Derived d;
    b = &d;
    b->fun1();
    b->fun2();
}
