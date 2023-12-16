#include<iostream>
#include<vector>
#include<list>
using namespace std;

// Given an array and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.
// Example:
// Input:
// 2
// 5
// -8 2 3 -6 10
// 2
// 8
// 12 -1 -7 8 -15 30 16 28
// 3
// Output:
// -8 0 -6 -6
// -1 -1 -7 -15 -15 0 .

void all_first_negetive_el_of_subarray(vector<int> &arr, int n, int k){
  int end=0, start=0;
  list<int> l;
  vector<int> v;
  while(end<n){
    if(arr[end] < 0) {
      l.push_back(arr[end]);
    }
    if(end - start + 1 < k){
      end++;
    }

    if(end - start + 1 == k){
      if(l.size() == 0) {
        v.push_back(0);
      }else {
        v.push_back(l.front());
        if(arr[start] == l.front()){
          l.pop_front();
        }
        start++;
        end++;
      }
    }
  }
  for (int i=0; i<n; i++) {
    cout<<v[i]<<endl;
  }
}

int main () {
  vector<int> arr = {12, -1 ,-7, 8, -15, 30, 16, 28};
  all_first_negetive_el_of_subarray(arr, arr.size(), 3);
  return 0;
}