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

   void InsertAtHead (Node * &head,int d){// yeha reference isliye liya kyuki hm chahte hai ki
                                    // original linked list ho usssi ki andar changes ho
    //craeting new node(temp)
    Node* temp= new Node(d);
    // ab hum point krwaenge next node ko
    temp -> next = head;// mtlb temp ka next 2nd wale k head ko point kr rha hai 
    // ab head ko temp ki taraf shift krenge 
    head= temp;
}

void Insert_at_anyplace(Node* &head, int pos, int d){
//     if(pos==1){
//         InsertAtHead(head,d);
//         return;
//     }
// //new node created
// Node* nodetoinsert= new Node(d);

// traverse karna pdega pos-1 tk
 Node* temp= head;// initially head pr h
int cnt=1;//this will count 

while(cnt<pos-1){
    temp=temp->next;
    cnt++;
}
Node* nodetoinsert= new Node(d);
nodetoinsert->next=temp->next;
temp->next=nodetoinsert;
}


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
  void InsertAtTail(Node* &tail,int d){
    Node * temp= new Node(d);
    tail->next=temp;
    tail=temp;
}

int main()
{   
     Node* node1= new Node(25);
     

     Node* head = node1;
     Node* tail = node1;
     cout<<"before insertion of node : ";
     InsertAtHead(head,10);
InsertAtHead(head,11);
InsertAtHead(head,12);
     InsertAtTail(tail,10);
InsertAtTail(tail,11);
     print(head);
     int pos;
     int ele;
     cout<<"tell me at which position you want to insert: ";
     cin>>pos;
      cout<<"tell me which element you want to insert: ";
      cin>>ele; 
     cout<<"after insertion of node : ";
    Insert_at_anyplace(head,pos,ele);
     print(head);

    return 0;
}