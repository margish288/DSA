#include<iostream>
#include<math.h>
using namespace std;

// repeating array
int largestElementIdx(int arr[], int size) {
  int maximum = INT_MIN;

  for(int i=0; i<size; i++) {
    if(arr[i] > maximum) {
      maximum = i;
    }
  }

  return maximum;
}

int main () {
  int n;
  cin>>n;

  int arr[n];
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }

  int idx = largestElementIdx(arr, n);
  int el = arr[idx];
  for(int i=0; i<n; i++) {
    if(el == arr[i]) {
      arr[i] = -1;
    }

  }

  idx = largestElementIdx(arr, n);
  cout<<arr[idx]<<endl;

  return 0;
}