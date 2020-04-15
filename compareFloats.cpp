#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

  double value1 = 1.1;
  // float value1 = 1.1 <---------------------|
  // is is going to be not equals because float value is 1.100000024 which is not equal to 1.1

  if (value1 == 1.1)
  {
    cout << "equals" << endl;
    cout << setprecision(10) << value1 << endl;
  }
  else
  {
    cout << "not equals" << endl;
    cout << setprecision(10) << value1 << endl;
  }

  return 0;
}