// WAP to demonstrate the order of call of constructors and destructors in case of multilevel inheritance
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
class B : public A
{
public:
    B()
    {
        cout << "Intermediate Base Class Constructor\n";
    }
    ~B()
    {
        cout << "Intermediate Base Class Destructor\n";
    }
};
class C : public B
{
public:
    C()
    {
        cout << "Derived Class Constructor\n";
    }
    ~C()
    {
        cout << "Derived Class Destructor\n";
    }
};
int main()
{
    class C Der;
}