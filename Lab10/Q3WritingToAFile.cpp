// WAP to read the string from keyboard and write to a file.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char line[100];
    fstream file;
    file.open("File3.txt", ios ::out | ios ::app);
    if (file.fail())
    {
        cout << "Error Opening file ... " << endl;
    }
    else
    {
        cout << "Enter a line : ";
        cin.getline(line, 100);
        file << line << endl;
        cout << "Line written into the file" << endl;
        file.close();
    }
    return 0;
}
