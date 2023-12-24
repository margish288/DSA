#include<iostream>
using namespace std;

// standard Queue operations are : enqueue(add from rear), dequeue(remove from front), isFull, isEmpty, count

class Queue {
  private:
    int rear, front;
    int arr[5];

  public:
    Queue() {
      rear = -1;
      front = -1;
      for(int i=0; i<5; i++) {
        arr[i] = 0;
      }
    }

    bool isEmpty() {
      if(rear == -1 && front == -1) {
        return true;
      }
      return false;
    }

    bool isFull() {
      if(rear == sizeof(arr) - 1) {
        return true;
      }

      return false;
    }

    void enqueue(int value) {
      if(isFull()) {
        cout<<"Queue is full"<<endl;
        return;
      }else if(isEmpty()) {
        //r=0
        // [1, 2, 3, 4, 5]
        //f=0
        rear = front = 0;
      }else {
        rear++;
      }
      arr[rear] = value;
    }

    int dequeue() {
      int x = 0;
      if(isEmpty()) {
        return -1;
      }else if(front == rear) {
        x = arr[front];
        front = rear = -1;
      }else {
        x = arr[front];
        front++;
      }

      return x;
    }

    int count() {
      return (rear-front+1);
    }

    void display() {
      cout<<"Queue elements are : "<<endl;
      for(int i=0; i<5; i++) {
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
};

int main() {
  Queue q;

  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  q.display();
  cout<<"is empty- "<<q.isEmpty()<<endl;
  cout<<"is full- "<<q.isFull()<<endl;

  cout<<q.count()<<endl;
  cout<<"dequeued element- "<<q.dequeue()<<endl;
  cout<<"dequeued element- "<<q.dequeue()<<endl;
  q.enqueue(1);

  cout<<"count- "<<q.count()<<endl;

  return 0;
}