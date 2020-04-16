#include <iostream>
using namespace std;

int main()
{

  string animals[][3] = {
      {"fox", "dog", "cat"},
      {"mouse", "squirrel", "parrot"}};

  // cout << "size of string in bytes is: " << sizeof(string) << endl;      //suppose to be 8 but i got 24
  // cout << "size of animals in bytes is: " << sizeof(animals[0]) << endl; //suppose to be 8 but i got 24

  for (int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++)
  {
    for (int j = 0; i < sizeof(animals[0]) / sizeof(string); j++)
    {
      cout << animals[i][j] << " " << flush;
    }
    cout << endl;
  }

  return 0;
}