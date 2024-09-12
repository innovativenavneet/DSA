#include<bits/stdc++.h>
using namespace std;
class Queue{
int* arr;
int size;
int front;
int rear;
public:
  Queue() {//constructor
        size = 100001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

// int size(){

// }
void push(int element){
//check if full
if(rear==size){
cout<<"the queue is full "<<endl;

}
// if(front == rear){
//     cout<<"the queue is empty"<<endl;
// }
else{
    arr[rear]=element;
    rear++;
}

}
int pop(){
if(front==rear){
    cout<<"the queue is empty"<<endl;
    return true;
}
else{
    int ans=arr[front];
    arr[front]=-1;
    front++;

if(front==rear){
    front=0;
    rear=0;
}
return ans;
}
}

bool isempty(){
    if (front==rear){
     cout<<"the queue is empty"<<endl;
     return true;
    }
    else{
        cout<<"the queue is not empty"<<endl;
        return false;
    }

}

};

int main()
{
    Queue myQueue;

    // Example of pushing elements into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Example of popping elements from the queue
    cout << "Popped element: " << myQueue.pop() << endl;

    // Check if the queue is empty
    myQueue.isempty();

    // Example of pushing more elements
    myQueue.push(40);
    myQueue.push(50);

    // Check if the queue is empty again
    myQueue.isempty();

    return 0;
}