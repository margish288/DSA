#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n;
  cin>>n;
  vector<int> v(n);

  for(int i; i<v.size(); i++) {
    cin>>v[i];
  }
  int targetSum = 7;
  int pair = 0;
  int ptr = 0;
  int i = 1;

  while(i < v.size() && ptr < v.size() - 1){
    if(v[ptr] + v[i] == targetSum) {
      pair++;
    }

    if(i == v.size() - 1 && ptr < v.size()) {
      // when i has reched to size()
      // increase the counter for ptr
      // and now set i = ptr // note that i's value is always greater than ptr
      // but here we first set to ptr
      // after the if statement we already increasing the i's value
      ptr++;
      i = ptr;
    }
    i++;
  }

  cout<<pair<<endl;
  return 0;
}