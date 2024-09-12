#include <iostream>
using namespace std;

int main()
{

  int marks[100]; // intialization of aaray
  int n;          // initializaton of variable
  cout << "enter no of students: " << endl;
  cin >> n;

  // we also can update a value in an array
  marks[0] = 6;

  // for input
  for (int i = 0; i < n; i++)
  {
    cout << "enter marks : ";
    cin >> marks[i];
    cout << endl;
  }
  // for output
  for (int i = 0; i < n; i++)
  {
    cout << marks[i] << endl;
  }

  return 0;
}
