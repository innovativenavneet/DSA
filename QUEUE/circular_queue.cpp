#include<bits/stdc++.h>
using namespace std;
class Circularqueue{
    // we are initializing data member
public:
int* arr;
int front;
int rear;
int size;


// let's make a constructor to define each initializer
Circularqueue(int n){
    size=n;
    arr= new int[size];
    front=rear=-1;
}
 int enqueue(int data){
// checking if queue is full 
    if((front==0 && rear==size-1) || (rear==(front -1 ) % (size-1))){
        cout<<"Sorry the queue is full "<<endl;
        return false;
    }
// checking if queue is empty
    else if(front==-1){
        front=rear=0;
        arr[rear]=data;

    }
// checking is queue is full from rear and empty from front
    
       else if((rear==size-1) && (front!= 0)){
            rear=0;// to maintain cyclic picture
             arr[rear]=data;
        }
        else{
            rear++;
             // pushing the value
         arr[rear]=data;
           
        }
       
            return true;
    }
 


int dequeue(){
    // if queue is empty
    if(front==-1){
        cout<<"the queue is empty "<<endl;
        return -1;
    }
    int ans=arr[front];
    arr[front]=-1;
    // if queue contains single element
     if(front==rear){
        front=rear=-1;
    }
    
    else if(front==size-1){
            front=0;// to maintain cyclic picture
        }
    else{
            front++;
        }
    return ans;
    }





};
int main()
{
Circularqueue myQueue(5);

    // Enqueue elements
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    // Dequeue and print elements
    cout << "Dequeued element: " << myQueue.dequeue() << endl;
    cout << "Dequeued element: " << myQueue.dequeue() << endl;

    // Enqueue more elements
    myQueue.enqueue(40);
    myQueue.enqueue(50);

    // Dequeue and print elements
    cout << "Dequeued element: " << myQueue.dequeue() << endl;

    // Check if the queue is empty
     cout << "Dequeued element: " << myQueue.dequeue();
    return 0;
}