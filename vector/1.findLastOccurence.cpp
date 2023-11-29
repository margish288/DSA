#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n;
  int key;
  cin>>n;
  vector<int> v(n);
  cin>>key;

  for(int i=0; i<v.size(); i++) {
    cin>>v[i];
  }

  for(int i=v.size() - 1; i>=0; i--) {
    if(v[i] == key) cout<<"i is -> "<<i;

    cout<<"i is -> "<< "not found";
  }

  return 0;
}