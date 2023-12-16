#include<iostream>
#include<vector>
#include<list>
#include<math.h>
using namespace std;
// Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K.

// Example:

// Input 1:
//     A = [1, 3, -1, -3, 5, 3, 6, 7]
//     B = 3
// Output 1:
//     C = [3, 3, 5, 5, 6, 7] .

vector<int> max_of_each_subarray_in_array(vector<int> v, int n, int k) {
  int start=0, end=0, mx=INT_MIN;
  list<int> l;
  vector<int> ans;
  while(end<n) {
    while(l.size() > 0 && l.back() < v[end]){
      l.pop_back();
    }
    l.push_back(v[end]);
    if(end - start + 1 < k) {
      end++;
    }else if(end - start + 1 == k) {

      ans.push_back(l.front());
      if(l.front() == v[start]) {
        l.pop_front();
      }
      start++;
      end++;
    }
  }

  return ans;
}

int main() {
  vector<int> v = {1, 3, -1, -3, 5, 3, 6, 7};
  vector<int> ans = max_of_each_subarray_in_array(v, v.size(), 3);
  for(int i=0; i<ans.size(); i++) {
    cout<<ans[i]<<" ";
  }
  cout<<endl;

  return 0;
}