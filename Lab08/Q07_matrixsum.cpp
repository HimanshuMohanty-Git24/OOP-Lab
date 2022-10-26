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
    Matrix operator+(Matrix m1)
    {
        Matrix t;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                t.a[i][j] = a[i][j] + m1.a[i][j];
            }
        }
        return t;
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
    cout << "\nMatrix 1:\n";
    Matrix m1;
    m1.input();
    m1.display();
    cout << "\nMatrix 2:\n";
    Matrix m2;
    m2.input();
    m2.display();
    cout << "\nThe sum of two matrix is:\n";
    Matrix m3 = m1 + m2;
    m3.display();
}