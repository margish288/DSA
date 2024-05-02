#include<iostream>
#include<string.h>
using namespace std;

void josephus(vector<int> persons, int k, int index) {
    if(persons.size() == 1) {
      cout<<persons[0]<<endl;
      return;
    }

    index = ((index + k) % persons.size()); // mod for maintain circular behaviour of person array

    persons.erase(persons.begin() + index);

    josephus(persons, k, index);
}

int main() {
    int n = 14;
    int k = 2;
    k--;

    int index = 0;
    vector<int> persons;

    for(int i=0; i<n; i++) {
      persons.push_back(i);
    }

    josephus(persons, k, index);

    cout<<endl;
}