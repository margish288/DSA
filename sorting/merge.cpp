#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int l, int mid, int r){
  int n1 = mid-l+1;
  int n2 = r-mid;

  int arr1[n1];
  int arr2[n2];

  // add values to both array from main arr
  for(int i=0; i<n1; i++) {
    arr1[i] = arr[l+i];
  }
  for(int i=0; i<n2; i++) {
    arr2[i] = arr[mid+1+i];
  }

  // merge 2 array
  int i=0;
  int j=0;
  int k=l;

  while(i < n1 && j < n2) {
    if(arr1[i] < arr2[j]){
      arr[k] = arr1[i];
      k++;
      i++;
    }else {
      arr[k]= arr2[j];
      k++;
      j++;
    }
  }

  // if pointer i is not reached to last of arr1 than this loop ensures that i is reaching to end the array
  while(i < n1) {
    arr[k] = arr1[i];
    k++;
    i++;
  }
  // if pointer j is not reached to last of arr2 than this loop ensures that j is reaching to end the array
  while(j<n2) {
    arr[k] = arr2[j];
    k++;
    j++;
  }

}

void mergeSort(int arr[], int l, int r) {
  if(l<r) {
    int mid = (l + r)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid+1, r);

    merge(arr, l, mid, r);
  }
}

int main() {
  int arr[] = { 1, 4, 2, 3, 5 };
  // for(int i=0; i<n; i++) cin>>v[i];

  mergeSort(arr, 0, 4);

  for(int i=0; i<5; i++) cout<<arr[i]<<" ";
  cout<<endl;
  return 0;
}