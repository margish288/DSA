#include<iostream>
#include<stack>
#include<string>

using namespace std;

// https://www.geeksforgeeks.org/check-for-balanced-parentheses-in-an-expression
// is brackets are balanced or not ?

bool isBracketsAreBalanced(string s) {
  stack<char> holdBracket;
  int length = s.length();

  for(int i=0; i<length; i++) {
    if(holdBracket.empty()) {
      holdBracket.push(s[i]);
    }else if((holdBracket.top() == '[' && s[i] == ']') || (holdBracket.top() == '{' && s[i] == '}') || (holdBracket.top() == '(' && s[i] == ')')){
      holdBracket.pop();
    }else {
      holdBracket.push(s[i]);
    }
  }

  if(holdBracket.empty()) {
    return true;
  }

  return false;
}

int main() {
  string s;
  cin>>s;
  cout<<isBracketsAreBalanced(s)<<endl;
  return 0;
}