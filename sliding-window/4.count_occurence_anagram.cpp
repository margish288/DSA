#include<iostream>
#include<map>
using namespace std;

// Given a word pat and a text txt. Return the count of the occurences of anagrams of the word in the text.

// Example 1:

// Input:
// txt = forxxorfxdofr
// pat = for
// Output: 3
// Explanation: for, orf and ofr appears
// in the txt, hence answer is 3.
// Example 2:

// Input:
// txt = aabaabaa
// pat = aaba
// Output: 4
// Explanation: aaba is present 4 times
// in txt. .

void count_occurence_anagram(string str, string pat){
  int start=0, end=0;
  map<char, int> mp;
  int ans = 0;
  // creates a map with pat
  for(int i=0; i<pat.length(); i++) {
    mp[pat[i]]++;
  }
  int k = pat.length();
  int count=mp.size();

  while(end<str.size()){
    mp[str[end]]--;
    if(mp[str[end]] == 0) {
      count--;
    }

    if(end - start + 1 < k) {
      end++;
    } else if(end - start + 1 == k) {
      if(count == 0) {
        ans++ ;
      }

      // sliding the window
      mp[str[start]]++;
      if(mp[str[start]] == 1) {
        count++;
      }
      start++;
      end++;
    }
  }

  cout<<ans<<endl;
}

int main () {
  string str="forxxorfxdofr", pat="for";
  count_occurence_anagram(str, pat);
  return 0;
}