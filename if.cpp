#include <iostream>
using namespace std;

int main() {

  string password = "hello";
  cout << "Enter a password" << endl;
  
  string userInput = "";
  cin >> userInput;

  cout << "what did the user input: " << userInput << endl;

  if(userInput != password){
    cout << "Wrong password";
    return 0;
  } else {
    cout << "Access granted" << endl;
  }

  return 0;
}