#include <iostream>
using namespace std;

void showMenu() //function defined, void means doesnt return anything
{
  cout << "1. Search " << endl;
  cout << "2. View Record " << endl;
  cout << "3. Quit" << endl;
};

int getInput() //return integar
{
  cout << "Enter selection" << endl;
  int input;
  cin >> input;
  return input;
};

void processSelection(int selection)
{
  switch (selection)
  {
  case 1:
    cout << "Searching..." << endl;
    break;
  case 2:
    cout << "Viewing..." << endl;
    break;
  case 3:
    cout << "Quitting" << endl;
    break;
  default:
    cout << "Please select an item from the menu.." << endl;
  }
};

int main()
{
  // showMenu();
  // int input = getInput();
  // processSelection(input);

  //this works as well
  showMenu();
  processSelection(getInput());

  return 0;
}