// Approach:
// hum yaha pr deletion operation kr rhe hai to hm ek algo use krenege
// hm 2 pointer lenge curr, prev fir hum prev ka next ko current ke next se 
// point krwa denge ye 2nd element se last tk chalega
// agar hm first  node ko delete krwana chahe to hm 1st node k head ko next pr
// point krwa denge and first node ko memory free krwa denge ....

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
 //destructor
~Node(){
    int value= this-> data;
    //memory relesed
    if(this->next != NULL){
        delete next;
        this-> next=NULL;
    }
    cout<<" memory is free at :"<<value<<" "<<endl;
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
void print (Node* &head){
    Node* temp= head;// sbse pehle temp (yaha temp naam ka naya var bna rhe hai)
                      //  jo hai wo 1st head pr hai 
    //   ab sawal ye hai ki kbtk hai
   while(temp != NULL){  //  jbtk temp pointer null nhi ho jata tabtk
        std::cout<<temp->data<<" ";
        /*if wanna print the add. */
        //cout<<temp->next<<" ";
        temp=temp->next;
    }
    std::cout<<endl;
}


void deleteNode(int position, Node* & head){
    // deleting first node
    if(position==1){
        Node* temp= head;
        head= head->next;
        temp->next=NULL;
        // memory free
        delete temp;
    }
    //deleting any middle node or last node
    else{
       Node* curr= head;
       Node* prev= NULL;
    //    mtlb abhi 1st element pr curr hai or usse pehle prev hai
    int cnt=1;
    // ab hum iterate krwayenge saare elements mein 
    while(cnt< position){
        prev=curr;//hum prev wale pointer ko curr pr lete aaye 
        curr= curr->next; // or curr ko aage badha diye
        cnt++;
    }
    //ab jb hum iterate krwa chuke hai ab hum prev ko k baad k baad se connect krenege
    // or curr node ko delete kr denge
     prev-> next= curr-> next;
     curr-> next=NULL;
     delete curr;


    }
}
int main(){
    Node* node1= new Node(45);
/*This line creates a new node object,
  node1, with a data value of 10.It uses dynamic memory allocation 
  (new) to create the object jb bhi hm ye bna rhe h to constructor call hoga */
 //cout<< node1 -> data <<endl;//This line prints the data value of node1, which is 10.
//cout<< node1 -> next <<endl;

Node* head = node1;//head abhi node 1 par hai
cout<<"the given liknedlist is : ";
InsertAtHead(head,10);
InsertAtHead(head,11);
InsertAtHead(head,12);
InsertAtHead(head,13);
InsertAtHead(head,14);
InsertAtHead(head,15);
InsertAtHead(head,16);


 print(head);
 cout<<endl;
 cout<<"after deletion linked list is,";
    deleteNode(4,head);
    print(head);

    return 0;
}