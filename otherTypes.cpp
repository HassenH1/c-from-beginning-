#include <iostream>
using namespace std;

int main(){

  //type boolean

  bool bValue = false;
  cout << "if false the value is: " << bValue << endl;

  bValue = true;
  cout << "if true the value is: " << bValue << endl;

  //another type Char
  char cValue = 55;
  cout << cValue << endl;
  //reason tthis prints out 7 is because of ASCII values which represent char 7 not the actual number 7
  // '7' !== 7
  
  return 0;
}