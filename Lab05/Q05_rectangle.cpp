/*5.Write a program to print the area of a rectangle by creating a class named
'Area' having two functions. First function named as 'setDim' takes the length and
breadth of the rectangle as parameters and the second function named as 'getArea'
returns the area of the rectangle. Length and breadth of the rectangle are entered
through keyboard.*/
#include <iostream>

using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
    void setDim(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int getArea()
    {
        return (length * breadth);
    }
};

int main()
{
    int l, b;
    rectangle r1;
    cout << "Enter the length of rectangle:";
    cin >> l;
    cout << "Enter the breadth of rectangle:";
    cin >> b;
    r1.setDim(l, b);
    cout << "Area of rectangle is:" << r1.getArea();
    return 0;
}
