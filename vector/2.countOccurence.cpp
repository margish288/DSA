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

  int numToCount;
  cin>>numToCount;
  int count = 0;
  for(int i =0; i<v.size(); i++) {
    if(v[i] ==  numToCount) {
      count++;
    }
  }

  cout<<"count for "<<numToCount<<" is -> "<<count<<endl;


  return 0;
}