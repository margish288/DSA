#include<iostream>
using namespace std;

int getUniqueArray(int arr[], int size) {
  int unique = -1;

  for(int i=0; i<size; i++) {
    for(int j=i+1; j<size; j++) {
      if(arr[i] == arr[j]) {
        arr[i] = arr[j] = -1;
      }
    }
  }

  for(int i=0; i<size; i++){
    if(arr[i] > 0) {
      unique = arr[i];
    }
  }
  return unique;
}

int main () {
  int n;
  cin>>n;

  int arr[n];
  for(int i=0; i<n; i++) {
    cin>>arr[i];
  }

  int unique = getUniqueArray(arr, n);

  return 0;
}