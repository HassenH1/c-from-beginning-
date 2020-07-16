#include <iostream>
#include <vector> //must include library
using namespace std;

int main()
{
  //vector time!!!
  //arrays are always fixed, which is not good in certain cases;

  // vector are dynamic array
  //vector are objects
  vector<char> vowels;     //declaring vector creating an empty vector with no elements
  vector<int> test_scores; //declaring vector

  vector<char> vowels(5);     // i want 5 character
  vector<int> test_scors(10); // i want 10 ints and they are set to 0

  vector<int> test_scores{100, 98, 89, 93}; //assign each int of vectos
  vector<double> hi_temp(365, 80.0);        //(initial size, initalize all the 365 to)

  //accessing vector
  test_scores[0]; //does not check for bounds is the problem for using []
  //or we can use the .at() method to access elements in vector
  test_scores.at(1);

  test_scores.push_back(10); //like arr.push() but the element must be the same type

  //vector <char> vowels;       //empty
  //vector <char> vowels (5);   //5 initialized to zero
  vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

  cout << vowels[0] << endl;
  cout << vowels.at(0) << endl;
  cout << vowels[4] << endl;
  cout << vowels.at(4) << endl;

  // vector <int> test_scores (3); //3 element all initialized to zero
  // vector <int> test_scores (3,100); 3 element all initialized to 100
  vector<int> test_scores{100, 98, 89}; //vector of size 3

  cout << "\nTest scores using array syntax" << endl;
  cout << test_scores[0] << endl;
  cout << test_scores[1] << endl;
  cout << test_scores[2] << endl;

  cout << "\nTest scores using vector syntax" << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl; //.size() is like .length() in js

  cout << "\nEnter three test scores" << endl;
  cin >> test_scores.at(0);
  cin >> test_scores.at(1);
  cin >> test_scores.at(2);

  cout << "\nUpdated test scores: " << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;

  //this what makes vectors dynamic

  cout << "\n Enter a test score to add to the vector:";

  int score_to_add{0}; //regular int
  cin >> score_to_add;

  test_scores.push_back(score_to_add); //push the regular int var into the back of the vector

  cout << "\n Enter on more test score to add to the vector:";

  cin >> score_to_add;

  test_scores.push_back(score_to_add);

  cout << "\n Test score are now:" << endl;

  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  cout << test_scores.at(3) << endl;
  cout << test_scores.at(4) << endl;

  cout << "\nTHere are not " << test_scores.size() << " score in the vector" << endl;

  cout << "this should cause an exception" << test_scores.at(10) << endl; //since this doesnt exist so its an "error". also if i do test_scores[10] no error but will crash computer

  //2d vectors
  vector<vector<int>> movie_ratings{
      {1, 2, 3, 4},
      {1, 2, 4, 4},
      {1, 3, 4, 5}}; //vector of vectors 2d

  cout << "\nHere are the movie ratig for reviews #1 using array syntax" << endl;
  cout << movie_ratings[0][0] << endl;
  cout << movie_ratings[0][1] << endl;
  cout << movie_ratings[0][2] << endl;
  cout << movie_ratings[0][3] << endl;

  cout << "\nHere are the movie rating for reviewer #1 using vector syntax: " << endl;
  cout << movie_ratings.at(0).at(0) << endl;
  cout << movie_ratings.at(0).at(1) << endl;
  cout << movie_ratings.at(0).at(2) << endl;
  cout << movie_ratings.at(0).at(3) << endl;
}