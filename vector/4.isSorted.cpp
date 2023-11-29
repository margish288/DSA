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

  int check = true;
  for(int i = 1; i<v.size(); i++) {
    if(v[i-1] > v[i]) {
      check = false;
      break;
    }
  }

  if(check) {
    cout<<"array is sorted"<<endl;
  }else {
    cout<<"array is not sorted"<<endl;
  }

  return 0;
}