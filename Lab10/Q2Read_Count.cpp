/*WAP to read the contents of a file and count the number of characters,
  blanks, tabs and lines in the screen and display it in the screen.*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  int count = 0;
  char data[100], ch;
  ifstream ifile;
  ifile.open("File1.txt");
  cout << "Reading data from a file :-" << endl;
  while (!ifile.eof())
  {
    ifile.getline(data, 100);
    cout << data << endl;
  }
  while (data[count] != '\0')
  {
    count++;
  }
  ifile.close();
  cout << "\nNumber of character=" << count << endl;

  return 0;
}