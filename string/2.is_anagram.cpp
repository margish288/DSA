#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isAnagram(string s1, string s2){
  vector<int> freq(26, 0);

  if(s1.length() != s2.length())
    return false;

  // freq. => s1 freq++ => s2 freq--
  for(int i=0; i<s1.length(); i++) {
    freq[s1[i] - 'a']++;
    freq[s2[i] - 'a']--;
  }


  // check if all the element is zero in freq. if it is zero then return true
  for(int i=0; i<freq.size(); i++) {
    if(freq[i] != 0) {
      return false;
    }
  }

  return true;
}

int main() {
  string str, substr;
  cin>>str>>substr;

  // one way is to sort substr and check if it is similar to str

  bool isStringAnagram =  isAnagram(str, substr);
  cout<<isStringAnagram<<endl;

  return 0;
}