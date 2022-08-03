#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string name;
    cout << "Enter your name:";
    getline(cin, name);
    cout << "Hello " << name;
    return 0;
}
