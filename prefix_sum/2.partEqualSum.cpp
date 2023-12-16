#include<iostream>
using namespace std;

// check if any any partatio of array into two subarray with formally, check that the prefix sum is equal to sufix sum
// 6 2 4 3 1

int main() {
  // input
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }

  // CODE HERE...
  // total sum = pre_sum + suf_sum
  int total_sum = 0;
  for(int i=1; i<n; i++) {
    total_sum += arr[i];
  }

  int pre_sum = 0;
  int check = false;
  for(int i=0; i<n; i++) {
    pre_sum += arr[i];
    int suf_sum = total_sum - pre_sum;
    if(suf_sum == pre_sum) {
      check = true;
    }
  }

  if(check) cout<<1<<endl;
  else cout<<0<<endl;

  // CODE END...

  // output
  for(int i=0; i<n; i++) {
    cout<<arr[i]<<" ";
  }
  return 0;
}