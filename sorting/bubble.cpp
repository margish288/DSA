#include<iostream>
#include<vector>
using namespace std;

void bubble(vector<int> &arr, int n) {
 for(int i=n-1; i>=0; i--) {
  bool didRan = false;
  for(int j=0; j<i-1; j++) {
    if(arr[j] > arr[j+1]){
      swap(arr[j+1], arr[j]);
      didRan = true;
    }
  }
  if(!didRan) {
    break;
  }
 }
}

int main() {
  vector<int> v = { 10, 50, 20, 40, 30 };
  bubble(v, 5);

  for(int i=0; i<5; i++) cout<<v[i]<<" ";
  cout<<endl;
  return 0;
}