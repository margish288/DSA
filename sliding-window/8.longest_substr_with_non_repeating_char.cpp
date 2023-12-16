#include<iostream>
#include<string>
#include<map>
using namespace std;

// Given a string you need to print the size of the longest possible substring that has exactly k unique characters.
// Example:
// Input: aabacbebebe 3
// Output: 7

int longest_substring_with_non_repeating_char(string str, int n) {
  int start=0, end=0,sum=0, mx=0;
  map<char, int> mp;

  while(end < n) {
    mp[str[end]]++;
    // if(mp.size() < end - start + 1){
    //   end++;
    // } // this condition is never hit because map size() will never less then actual window size
    if(mp.size() == end - start + 1){
      if(end-start+1 > mx) {
        mx = end - start + 1;
      }
      end++;
    }else if(mp.size() > end - start + 1){
      while(mp.size() > end - start + 1) {
        mp[str[start]]--;
        if(mp[str[start]] == 0) {
          mp.erase(mp[start]);
        }
        start++;
      }
      end++;
    }
  }
  return mx;
}

int main() {
  string str = "aabacbebebe";
  int ans = longest_substring_with_non_repeating_char("aabacbebebe", str.length());
  cout<<ans<<endl;

  return 0;
}