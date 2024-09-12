#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
 int data;//This member stores the data value associated with the node.
 Node* next;//This is a pointer to the next node in the linked list. It's initially set to NULL
 Node(int data){        /* This is the constructor for the node class.
  It takes an integer data as a parameter and
 initializes the data member with the provided value and
  sets the next pointer to NULL.*/
    this-> data= data;
   this-> next= NULL;
 }
   };

   void InsertAtTail(Node* &tail,int d){
    Node * temp= new Node(d);
    tail->next=temp;//tail apne niche node tamp ko add kr diya 
    tail=temp;   // or ab naya tail temp ho gya hai taki new node aaye
              // to wo usse apne nicche
}
// how to traverse in a linked list 
void print (Node* &head){
    Node* temp= head;// sbse pehle temp (yaha temp naam ka naya var bna rhe hai)jo hai wo 1st head pr hai 
    //   ab sawal ye hai ki kbtk hai
    while(temp != NULL){
        cout<<temp->data<<" ";
        /*if wanna print the add. */
        //cout<<temp->next<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
 Node* node1= new Node(45);
/*This line creates a new node object,
  node1, with a data value of 10.It uses dynamic memory allocation 
  (new) to create the object jb bhi hm ye bna rhe h to constructor call hoga */
 //cout<< node1 -> data <<endl;//This line prints the data value of node1, which is 10.
//cout<< node1 -> next <<endl;

Node* tail = node1;
Node* head = node1;//head abhi node 1 par hai
print(head);
InsertAtTail(tail,10);
InsertAtTail(tail,11);
InsertAtTail(tail,12);
InsertAtTail(tail,13);
InsertAtTail(tail,14);
InsertAtTail(tail,15);
InsertAtTail(tail,16);
 print(head);
    return 0;
}