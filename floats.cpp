#include <iostream>
#include <iomanip> //-> fixed, scientific notation, setprecision() etc

using namespace std;

int main()
{
  float fVal = 123.456789;
  cout << "size of float: " << sizeof(float) << endl;
  cout << fixed << fVal << endl; // -> this is best used case
  cout << scientific << fVal << endl;
  cout << setprecision(20) << fVal << endl;

  //more accurate than a float
  double dVal = 123.456789;
  cout << fixed << dVal << endl;
  cout << setprecision(20) << dVal << endl; // -> to tell cout to output how much you want to output

  //even more accurate 
  long double lVal = 123.456789876543210;
  cout << setprecision(20) << lVal << endl;


  return 0;
}