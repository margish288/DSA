#include<iostream>
#include<vector>
using namespace std;

//  sort an array consisting of only 0s and 1s
void bruteForce(vector<int> &arr) {
  int countZero = 0;
  for(int i=0; i<arr.size(); i++) {
    if(arr[i] == 0) countZero++;
  }

  for(int i=0; i<arr.size(); i++) {
    if(i<countZero) arr[i] = 0;
    else arr[i] = 1;
  }

}

void optimized(vector<int> &arr) {
  int l=0;
  int r=arr.size()-1;

  while(l<r){
    if(arr[l] == 1 && arr[r] == 0) {
      arr[l++] = 0;
      arr[r--] = 1;
    }

    if(arr[l] == 0) {
      l++;
    }

    if(arr[r] == 1) {
      r--;
    }
    cout<<"in"<<endl;
  }
}

int main() {
  int n;
  cin>>n;
  vector<int> arr;
  for(int i=0; i<n; i++) {
    int el; cin>>el;
    arr.push_back(el);
  }

  bruteForce(arr);
  optimized(arr);

  for(int i=0; i<arr.size(); i++) {
    cout<<arr[i]<<" ";
  }

  return 0;
}
