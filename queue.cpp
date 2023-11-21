#include <iostream>
using namespace std;

class Queue {

        int front;
        int rear;
        int arr[5];

    public:
        Queue() {
            front = -1;
            rear = -1;
            for(int i=0; i<5; i++) {
                arr[i] = 0;
            }
        }

     bool isEmpty() {
            if(front == -1 && rear == -1)
                return true;
            else
                return false;
        }

        bool isFull() {
            if(rear == 4)
                return true;
            else
                return false;
        }

        void enqueue(int val) {
            if(isFull()) {
                cout << "Queue is full" << endl;
            }
            else if(isEmpty()) {
                rear = 0;
                front = 0;
                arr[rear] = val;
            }
            else {
                rear++;
                arr[rear] = val;
            }
        }

        int dequeue() {
            int x;
            if(isEmpty()) {
                cout << "Queue is empty" << endl;
                return 0;
            }
            else if(front == rear) {
                x = arr[front];
                arr[front] = 0;
                rear = -1;
                front = -1;
                return x;
            }
            else {
                x = arr[front];
                arr[front] = 0;
                front++;
                return x;
            }
        }

        void display() {
            cout << "All values in the Queue are: " << endl;
            for(int i=0; i<5; i++) {
                cout << arr[i] << " ";
            }
        }
};


int main(){
int Queue;
enqueue(23);
enqueue(40);
display();
dequeue();
display();


}
