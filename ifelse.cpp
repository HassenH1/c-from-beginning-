#include <iostream>
using namespace std;

int main()
{

  string pword = "admin";

  cout << "1.\tAdd new record" << endl;
  cout << "2.\tdelete record" << endl;
  cout << "3.\tview records" << endl;
  cout << "4.\tsearch record" << endl;
  cout << "5.\tQuit" << endl;

  cout << "Select a number"
       << " " << flush;

  int value;
  cin >> value;

  if (value < 3 || value >= 6)
  {
    cout << "you do not have the right to use this menu option" << endl;
    cout << "unless you are admin, if Admin enter password otherwise just exit" << endl;
    string password;
    cin >> password;

    if (password == pword)
    {
      cout << "access granted" << endl;

    }
    else
    {
      cout << "wrong password, Exiting" << endl;
    }
  }
  else
  {
    switch (value)
    {
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      cout << "see you next time";
      break;
    }
  }

  return 0;
}