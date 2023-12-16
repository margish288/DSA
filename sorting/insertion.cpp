#include<iostream>
#include<vector>
using namespace std;

void insertion(vector<int> &arr, int n) {
  for(int i=0; i<n; i++) {
    int j = i;
    while(j > 0 && arr[j-1] > arr[j]){
      swap(arr[j], arr[j-1]);
      j--;
    }
  }
}

int main() {
  vector<int> v = { 10, 50, 20, 40, 30 };
  // for(int i=0; i<n; i++) cin>>v[i];

  insertion(v, 5);

  for(int i=0; i<5; i++) cout<<v[i]<<" ";
  cout<<endl;
  return 0;
}