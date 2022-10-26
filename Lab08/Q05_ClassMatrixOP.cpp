#include <iostream>
using namespace std;

class Matrix
{
    int a[3][3];

public:
    void input()
    {
        printf("\nEnter the numbers in matrix:\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }
    }
    void operator-()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                a[i][j] = -a[i][j];
            }
        }
    }
    void display()
    {
        printf("\nThe Matrix is:\n");
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    cout << "\nBefore negative operator:\n";
    Matrix m1;
    m1.input();
    m1.display();
    cout << "\nAfter negative operator:\n";
    -m1;
    m1.display();
}