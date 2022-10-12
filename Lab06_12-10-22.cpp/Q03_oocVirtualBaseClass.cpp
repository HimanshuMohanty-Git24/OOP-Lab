// WAP to demonstrate the order of call of constructors and destructors in case of virtual base class .
#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "Base Class constructor\n";
    }
    ~A()
    {
        cout << "Base Class Destructor\n";
    }
};
class B : virtual public A
{
public:
    B()
    {
        cout << "Intermediate Base1 Class Constructor\n";
    }
    ~B()
    {
        cout << "Intermediate Base1 Class Destructor\n";
    }
};
class C : virtual public A
{
public:
    C()
    {
        cout << "Intermediate Base2 Class Constructor\n";
    }
    ~C()
    {
        cout << "Intermediate Base2 Class Destructor\n";
    }
};
class D : public B, public C
{
public:
    D()
    {
        cout << "Derived class constructor\n";
    }
    ~D()
    {
        cout << "Derived Class Destructor\n";
    }
};
int main()
{
    class D Der;
}