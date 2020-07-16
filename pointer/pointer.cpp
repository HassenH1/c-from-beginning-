#include <iostream>
using namespace std;

void manipulate(double *value){
  cout << "2. Value of int in Manipluate: " << *value << endl;

  *value = 10.0;
  cout << "3. Value of int in Manipluate: " << *value << endl;
};

int main(){

  int nValue = 8; //allocated some memory and the amount we allocated is controlled by the int
  //nValue = 9; //and of course we can change the amount by setting it to something else
  //cout << "Int nValue: " << nValue << endl;

  //now you can create a variable that store the address of the int rather than the value itself
  //example
  int* pnValue = &nValue; //<--------whats this saying is "pointer(*) to an int equals address(&) of nValue(8),
                        //so what actually stores in pnValue is the address/memory of nValue
                        //you can put the * here int* pnValue or here int *pnValue
  cout << "Pointer to int address: " << pnValue << endl; //<-----we get memory address, which is memory location
  //we can get the original int
  //example
  cout << "Int value via pointer: " << *pnValue << endl; //<----to get the original value we must dereference like *pnValue

  cout << "=================================" << endl;

  double dValue = 123.4;
  cout << "1. dValue: " << dValue << endl;
  manipulate(&dValue);
  cout << "4. dValue: " << dValue << endl;

  return 0;
}