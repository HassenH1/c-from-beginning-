#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
  cout << "Max Value of int: " << INT_MAX << endl;
  cout << "Min Value of int: " << INT_MIN << endl;

  cout << "size of Int: " << sizeof(int) << endl;
  cout << "size of Short Int: " << sizeof(short int) << endl;
  cout << "size of long Int: " << sizeof(long int) << endl;
  cout << "size of unsigned Int: " << sizeof(unsigned int) << endl; //-> only positive and store a bigger number in it
  cout << "size of signed Int: " << sizeof(signed int) << endl;     ///-> default positive and negative numbers
  cout << "size of float: " << sizeof(float) << endl;
  cout << "size of double: " << sizeof(double) << endl;
  cout << "size of string: " << sizeof(string) << endl;

  return 0;
}