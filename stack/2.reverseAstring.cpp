#include<iostream>
#include<stack>
#include<string>
using namespace std;

// https://www.geeksforgeeks.org/stack-set-3-reverse-string-using-stack/

string reverse(string &s) {
  int length = s.length();
  stack<char> st;
  string ansString = "";

  for (int i = 0; i < length; i++){
    st.push(s[i]);
  }

  for(int i = 0; i < length; i++) {
    ansString += st.top();
    st.pop();
  }
  return ansString;
}

int main() {
  string s;
  cin>>s;
  string reversedString = reverse(s);
  cout<<reversedString<<endl;

  return 0;
}
