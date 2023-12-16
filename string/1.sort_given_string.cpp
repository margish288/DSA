#include<iostream>
#include<string>
#include<vector>
using namespace std;

// sort from a to z
string sort_given_string(string s, int n){
  vector<int> arr(26,0);

  for(int i=0; i<n; i++) {
    int index = s[i] - 'a';
    arr[index]++;
  }

  int j=0;
  for(int i=0; i<arr.size(); i++) {
    while(arr[i]--) { // run untill arr[i] => freq is not zero
      s[j++] = i + 'a'; // we add char which is at i-th index of array
    }
  }

  return s;
}

int main() {
  string s;
  cin>>s;
  string str =  sort_given_string(s, s.length());
  cout<<str<<endl;;
  return 0;
}