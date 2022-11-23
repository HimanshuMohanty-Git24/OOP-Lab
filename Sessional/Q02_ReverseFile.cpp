/*2.WAP to display content of a file in reverse order. */
#include <fstream>
#include <iostream>

using namespace std;

int main()
{

    ifstream in("File1.txt");

    in.seekg(0, in.end);
    int len = in.tellg();

    char c;
    while (len--)
    {
        in.seekg(len, in.beg);
        in >> c;
        cout << c;
    }
}