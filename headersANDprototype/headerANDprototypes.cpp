#include <iostream>

#include "utils.h" //<-----------------the prototype is in this file

using namespace std;

// void doSomething(); //<--------------or this is another way to add Prototype

int main(){

  doSomething();
  doSomething();

  return 0;
}

void doSomething(){
  cout << "Hello" << endl;
}