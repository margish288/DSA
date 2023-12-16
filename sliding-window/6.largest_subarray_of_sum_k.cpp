#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

// Given an array containing N positive integers and an integer K. Your task is to find the length of the longest Sub-Array with sum of the elements equal to the given value K.
// For Input:
// 1
// 7 5
// 4 1 1 1 2 3 5
// your output is:
// 4 .

int max_of_each_subarray_in_array(vector<int> v, int n, int k) {
  int start=0, end=0,sum=0, mx=0;
  while(end<n) {
    sum+=v[end];
    if(sum < k){
      end++;
    }else if(sum == k) {
      mx = max(mx, end-start+1);
      end++;
    }else if(sum > k){
      while(sum > k){
        sum-=v[start];
        start++;
      }
      end++;
    }
  }

  return mx;
}

int main() {
  vector<int> v = {4, 1, 1, 1, 2, 3, 5};
  int ans = max_of_each_subarray_in_array(v, v.size(), 3);
  cout<<ans<<endl;

  return 0;
}