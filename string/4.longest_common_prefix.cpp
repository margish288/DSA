#include<iostream>
#include<string>
#include<vector>
using namespace std;

string longest_common_prefix(vector<string> &arr){
  string ans = "";

  // first we sort the array of string so by sorting we get the dirstinct strings at first and last index so we just have to compare that only

  // sort the array of string
  sort(arr.begin(), arr.end());
  // TIME COMPLEXITY -> sorting string can be O(n log-n * m)
  // nlogn -> travesing the strings
  // m -> comparing the two string's length

  string s1 = arr[0]; // first string
  string s2 = arr[arr.size() - 1]; // last string

  // pointers
  int i=0;

  // comparing first and last string's character so we can get longest_common_prefix
  while(i < s1.size() -1 && i < s2.size() - 1) {
    if(s1[i] == s2[i]) {
      ans+=s1[i];
      i++;
    } else {
      break;
    }
  }

  return ans;
}

string longest_common_prefix_optimized(vector<string> &arr) {
  string s1 = arr[0];
  int string_count = s1.length();

  for(int i=0; i<s1.length(); i++) {

    int j = 0;
    // j<s1.length()      => first const string size
    // j<arr[i].size()    => current string's size
    // s1[j] == arr[i][j] => s1's j char is same as arr[i]'s jth char, if so then increase count of same prefix
    while(j<s1.length() && j<arr[i].size() && s1[j] == arr[i][j]){
      j++;
    }

    string_count = min(string_count, j); // minimizing the minimum count for common prefixer
  }

  return s1.substr(0, string_count); // taking only those charcter from the const string which is common to all the other string
}

int main() {
  int n;
  cin>>n;
  vector<string> arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  // one way is to sort substr and check if it is similar to str

  // string longest_common_prefix_string =  longest_common_prefix(arr);
  string longest_common_prefix_string =  longest_common_prefix_optimized(arr);
  cout<<longest_common_prefix_string<<endl;

  return 0;
}