#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isIsomorphic(string s1, string s2){
  vector<int> v1(128, -1);
  vector<int> v2(128, -1);

  if(s1.length() != s2.length()) {
    return false;
  }

  for(int i=0; i<s1.length(); i++) {
    if(v1[s1[i]] != v2[s2[i]]) return false; // checking if value of vector1 in s1[i]th index is same as vector2's s2[i]th index

    v1[s1[i]] = v2[s2[i]] = i; // set identifier as the current index
  }

  return true;
}

int main() {
  string str, substr;
  cin>>str>>substr;

  // one way is to sort substr and check if it is similar to str

  bool isIsomorphicString =  isIsomorphic(str, substr);
  cout<<isIsomorphicString<<endl;

  return 0;
}