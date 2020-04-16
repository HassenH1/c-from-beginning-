#include <iostream>
#include "Cat.h"

using namespace std;

void Cat::speak(){  //<-----------------Speak is part of Cat class
  cout << "Meow" << endl;
}

void Cat::jump(){
  cout << "jumping to the top of book case" << endl;
}