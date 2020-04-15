#include <iostream>
using namespace std;

int main()
{

  const string password = "hello";
  //cannt be changed

  string input;

  do
  {
    cout << "Enter your passowrd > " << flush;
    cin >> input;

    if (input != password)
    {
      cout << "access denied" << endl;
    }

  } while (input != password);

  cout << "access granted" << endl;

  return 0;
}