#include <iostream>
using namespace std;

// void showMenu() //function defined, void means doesnt return anything
// {
//   cout << "1. Search " << endl;
//   cout << "2. View Record " << endl;
//   cout << "3. Quit" << endl;
// };

// int processSelection() //return integar
// {
//   cout << "Enter selection" << endl;
//   int input;
//   cin >> input;
//   return input;
// };

string displayString(string h){
  cout << "whats being passed thru: " << h << endl;
  cout << "mutating the string now..." << endl;
  string world = "just world";
  h = world;
  return h;
}

int main()
{
  // showMenu();
  // int input = processSelection();

  // switch (input)
  // {
  // case 1:
  //   cout << "Searching..." << endl;
  //   break;
  // case 2:
  //   cout << "Viewing..." << endl;
  //   break;
  // case 3:
  //   cout << "Quitting" << endl;
  //   break;
  // default:
  //   cout << "Please select an item from the menu.." << endl;
  // }

  string h = "hello world";
  string out = displayString(h);
  cout << "inside main: " << out << endl;

  return 0;
}