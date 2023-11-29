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

  int stictlyGt;
  cin>>stictlyGt;
  int count = 0;
  for(int i = 0; i<v.size(); i++) {
    if(v[i] >  stictlyGt) {
      count++;
    }
  }

  cout<<"count for "<<stictlyGt<<" is -> "<<count<<endl;


  return 0;
}