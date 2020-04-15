#include <iostream>
using namespace std;

int main() {

  cout << "array of int" << endl;
  cout << "=================" << endl;

  int values[3];
  values[0] = 10;
  values[1] = 20; //if an index is not giving a value, compiler will give you a garbage value
  values[2] = 30;
  values[3]; //you can do this but its not defined, 

  cout << values[0] << endl;
  cout << values[1] << endl;
  cout << values[2] << endl;

  cout << "array of doubles" << endl;
  cout << "=================" << endl;

  double numbers[4] = {4.5, 2.3, 7.2, 8.1};
  cout << "Length of array = " << (sizeof(numbers)/sizeof(*numbers)) << endl;
  int len = (sizeof(numbers)/sizeof(*numbers));

  for(int i = 0; i < len; i++){
    cout << numbers[i] << endl;
  }


  cout << "initializing with zero value" << endl;
  cout << "=================" << endl;

  int numArray[8] = {};
  for (int i = 0; i < 8; i++){
    cout << "Element at index " << i << ": " << numArray[i] << endl;
  }


    cout << "Array of strings" << endl;
  cout << "=================" << endl;

  string text[] = {"apple", "banana", "orange"};
    for (int i = 0; i < 3; i++){
    cout << "Element at index " << i << ": " << text[i] << endl;
  }

  cout << "Bonus" << endl;
  cout << "=================" << endl;
  //create an array of multiples of 12
  //start with 0 go to 12
  //loop to init table
  //then use another loop to display them

  int num = 12;
  int ray[] = {};
  for(int i = 0; i <= 12; i++){
    cout << i * num << endl;
    ray[i] = i * num;
  }
  cout << "now to show whats inside Ray" << endl;

  for(int i = 0; i <= 12; i++){
    cout << ray[i] << endl;
  }

  return 0;
}