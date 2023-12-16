#include<iostream>
#include<math.h>
using namespace std;

// repeating array
int largestElement(int arr[], int size) {
  int maximum = INT_MIN;
  int secMax = INT_MIN;

  for(int i=0; i<size; i++) {
    if(arr[i] > maximum) {
      maximum = i;
    }
  }

  for(int i=0; i<size; i++) {
    if(arr[i] > secMax && arr[i] != maximum) {
      secMax = i;
    }
  }

  return secMax;
}

int main () {
  int n;
  cin>>n;

  int arr[n];
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }

  int el = largestElement(arr, n);
  cout<<el<<endl;

  return 0;
}