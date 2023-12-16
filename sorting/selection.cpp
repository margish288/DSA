#include<iostream>
#include<vector>
using namespace std;

void selection(vector<int> &arr, int n) {
  for(int i=0; i<n-1; i++) {
    int min=i;
    for(int j=i; j<n; j++){
      if(arr[j] < arr[min]){
        min = j;
      }
    }
    swap(arr[min], arr[i]);
  }
}

int main() {
  vector<int> v = { 10, 50, 20, 40, 30 };
  // for(int i=0; i<n; i++) cin>>v[i];

  selection(v, 5);

  for(int i=0; i<5; i++) cout<<v[i]<<" ";
  cout<<endl;
  return 0;
}