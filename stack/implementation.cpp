#include<iostream>

using namespace std;

class Stack {
  private:
    int top;
    int arr[5];

  public:
    Stack() {
      top = -1;
      for(int i = 0; i < 5; i++) {
        arr[i] = 0;
      }
    }

    bool isEmpty() {
      if(top == -1) {
        return true;
      }
      return false;
    }

    bool isFull() {
      if(top == 4) {
        return true;
      }
      return false;
    }

    void push(int value) {
      if(isFull()) {
        cout<<"Overflow"<<endl;
        return;
      }

      top++;
      arr[top] = value;
    }

    int pop() {
      if(isEmpty()) {
         cout<<"Underflow"<<endl;
        return 0;
      }

      int value = arr[top];
      arr[top] = 0;
      top--;
      return value;
    }

    int count() {
      return (top+1);
    }

    int peek(int position) {
      if(isEmpty()) {
        cout<<"Underflow"<<endl;
        return 0;
      }

      return arr[position];
    }

    void change(int position, int value) {
      int oldValue = arr[position];
      arr[position] = value;

      cout<<"value is changed from "<<oldValue<<" to "<<value<<" at index "<<position<<endl;
    }

    void display() {
      cout<<"All values in the stack are: "<<endl;
      for(int i = 4; i >= 0; i--) {
        cout<<arr[i]<<endl;
      }
    }
};


int main() {
  Stack stk;

  cout<<stk.isEmpty()<<endl;
  cout<<stk.isFull()<<endl;

  stk.push(1);
  stk.push(2);
  stk.push(3);
  stk.push(4);
  stk.push(5);
  stk.display();

  cout<<stk.pop()<<endl;
  cout<<stk.count()<<endl;
  stk.push(6);
  stk.push(7);
  stk.push(8);
  stk.display();


  return 0;
}