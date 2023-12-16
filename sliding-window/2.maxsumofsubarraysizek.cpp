#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

// Given an array of integers Arr of size 4 and a number 2. Return the minimum sum of a subarray of size 2.
// Given an array of integers Arr of size N and a number K. Return the minimum sum of a subarray of size K.
// Input:
// N = 4, K = 2
// Arr = [100, 200, 300, 400]
// Output:
// 700
// Explanation:
// Arr3  + Arr4 =700,
// which is minimum.

int min_sum_of_subarray(vector<int> &arr, int n, int k){
  int start=0, end=0, sum=0, mn=INT_MAX;
  while(end<n){
    sum+=arr[end];
    if(end-start+1 < k){
      end++;
    }else if(end - start + 1 == k) {
      mn = min(sum, mn);
      sum-=arr[start];
      start++;
      end++;
    }

  }
  return mn;
}

int main() {
  vector<int> arr = {100, 200, 300, 400};
  int n = arr.size();
  int k = 2;

  int mn = min_sum_of_subarray(arr, n, k);
  cout<<mn<<endl;
  return 0;
}