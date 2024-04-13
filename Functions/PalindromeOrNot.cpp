#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int num){
  string str = to_string(num);
  int len = str.length();
  for (int i = 0; i < len / 2; i++){
    if (str[i] != str[len - i - 1]){
      return false;
    }
  }
  return true;
}

int main(){
  int num;
  cout << "Enter a number: ";
  cin >> num;
  if (isPalindrome(num)){
    cout << isPalindrome(num) << ", True. " << num << " is a palindrome" << endl;
  }
  else{
    cout << isPalindrome(num) << ", False. " << num << " is not a palindrome" << endl;
  }
  return 0;
}