#include<iostream>
#include<string.h>
using namespace std;

void permute(string &s, vector<string> &arr, int left, int right) {
    if(left == right) {
      arr.push_back(s);
    }else {
      for(int i=left; i<=right; i++) {
        swap(arr[left], arr[i]);
        permute(s, arr, left+1, right);
        swap(arr[left], arr[i]);
      }
    }


}

int main() {
    string s = "ABC";
    vector<string> arr;
    permute(s, arr, 0, s.size()-1);

    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}