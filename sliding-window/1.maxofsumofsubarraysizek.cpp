#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int max_of_sum_of_subarrays(vector<int> &arr, int n, int k){
  int start=0, end=0, sum=0, mx=INT_MIN;
  while(end < n) {
    sum += arr[end];
    if(end - start + 1 < k){
      end++;
    }else if(end-start+1 == k) {
      mx = max(sum, mx);
      sum-=arr[start];
      start++;
      end++;
    }
  }

  return mx;
}

int main() {
  vector<int> arr = {100, 400, 700, 300};
  int n = arr.size();
  int k = 2;

  int mx = max_of_sum_of_subarrays(arr, n, k);
  cout<<mx<<endl;
  return 0;
}