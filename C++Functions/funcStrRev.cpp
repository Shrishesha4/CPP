#include <iostream>
using namespace std;

string reverseString(string str) {
  string reversedString = "";
  for (int i = str.length() - 1; i >= 0; i--) {
    reversedString += str[i];
  }
  return reversedString;
}

int main() {
  string inputString;
  cout << "Enter a string: ";
  getline(cin, inputString);

  string reversedString = reverseString(inputString);
  cout << "Reversed string: " << reversedString << endl;

  return 0;
}
