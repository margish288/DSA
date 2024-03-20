#include<iostream>
using namespace std;

long long fib(int n, vector<long long> &memo) {
  if(memo[n] == -1) {
    long long res;
    
    if(n == 0 || n == 1) {
      res = n;
    }else {
      res = fib(n-1, memo) + fib(n-2, memo);
    }
    
    memo[n] = res;
  }
  return memo[n];
}
    
long long findNthFibonacci(int number) {
  vector<long long> memo(number+1, -1);
  return fib(number, memo);
}


int main() {
  int n;
  cin>>n;
  
  long long fibNumber = findNthFibonacci(n);
  cout<<fibNumber<<
  return 0;
}
