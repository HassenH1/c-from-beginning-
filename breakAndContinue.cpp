#include <iostream>
using namespace std;

int main()
{
  //Break
  // for (int i = 0; i < 5; i++)
  // {
  //   cout << "i is: " << i << endl;

  //   if (i == 3)
  //   {
  //     cout << "skrr" << endl;
  //     break;
  //   }
  // }

  //Continue
  // for (int i = 0; i < 5; i++)
  // {
  //   cout << "i is: " << i << endl;

  //   if (i == 3)
  //   {
  //     cout << "skrr but about to keep going" << endl;
  //     continue;
  //   }
  // }

  const string password = "hello";
  //cannt be changed

  string input;

  do
  {
    cout << "Enter your passowrd > " << flush;
    cin >> input;

    if (input == password)
    {
      cout << "access granted" << endl;
      break;
    } else {
      cout << "acces denied" << endl;
    }

  } while (true);

  return 0;
}