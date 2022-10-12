// WAP to demonstrate the order of call of constructors and destructors in case of multiple inheritance.
#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "First Base Class constructor\n";
    }
    ~A()
    {
        cout << "First Base Class Destructor\n";
    }
};
class B
{
public:
    B()
    {
        cout << "Second Base Class Constructor\n";
    }
    ~B()
    {
        cout << "Second Base Class Destructor\n";
    }
};
class C : public A, public B
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