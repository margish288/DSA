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

  int sum = 0;
  for(int i = 0; i<v.size(); i++) {
    if(i % 2 == 0) {
      sum += v[i];
    }else {
      sum -= v[i];
    }
  }

  cout<<sum<<endl;

  return 0;
}