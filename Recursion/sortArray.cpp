#include<iostream>
#include<vector>
using namespace std;

void insert(vector<int> &arr, int temp) {
  if(arr.size() == 0 || arr[arr.size() - 1] <= temp) {
    arr.push_back(temp);
    return;
  }

  int x = arr[arr.size() - 1];
  arr.pop_back();
  insert(arr, temp);
  arr.push_back(x);
}


void sortArray(vector<int> &arr) {

    if(arr.size() == 0) {
        return;
    }

    int temp = arr[arr.size() - 1];
    arr.pop_back();
    sortArray(arr);

    // insert poped element
    insert(arr, temp);
}

int main() {
    vector<int> arr = {1, 0, 5, 2};

    sortArray(arr);

    for(int i=0; i<4; i++) {
        cout<<arr[i]<<" ";
    }
}