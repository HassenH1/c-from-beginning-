#include <iostream>
using namespace std;

int main(){

  // int val = 34;

  // cout << sizeof(val) << endl; //this returns 4 which is the number of bytes

  int values[] = {4,2,3,315}; 

  cout << sizeof(values) << endl; //takes 4 bytes
  cout << sizeof(int) << endl; //takes 4 bytes

  for(int i = 0; i < sizeof(values)/sizeof(int); i++){
    cout << values[i] << " " << flush;
  }

  return 0;
}