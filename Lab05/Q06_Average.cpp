/*6.Print the average of three numbers entered by the user by creating a class named
'Average' having a function to calculate and print the average without creating any object
of the Average class.*/
#include <iostream>
using namespace std;
class Average
{
public:
    static float Avg(float x, float y, float z)
    {

        return (x + y + z) / 3;
    }
};
int main()
{
    cout << "Enter three numbers: ";
    float x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    cout << "The average is: " << Average::Avg(x, y, z) << endl;
    return 0;
}