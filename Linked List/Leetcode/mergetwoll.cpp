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



// how to traverse in a linked list 
void print (Node* &head){
    Node* temp= head;// sbse pehle temp (yaha temp naam ka naya var bna rhe hai)
                      //  jo hai wo 1st head pr hai 
    //   ab sawal ye hai ki kbtk hai
   while(temp != NULL){  //  jbtk temp pointer null nhi ho jata tabtk
        cout<<temp->data<<" ";
        /*if wanna print the add. */
        //cout<<temp->next<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void merge(vector<int>nums1,vector<int> nums2){

}




int main()
{
 Node* node1= new Node(45);
/*This line creates a new node object,
  node1, with a data value of 10.It uses dynamic memory allocation 
  (new) to create the object jb bhi hm ye bna rhe h to constructor call hoga */
 //cout<< node1 -> data <<endl;//This line prints the data value of node1, which is 10.
//cout<< node1 -> next <<endl;

Node* head = node1;//head abhi node 1 par hai
print(head);
InsertAtHead(head,10);
InsertAtHead(head,11);
InsertAtHead(head,12);
InsertAtHead(head,13);
InsertAtHead(head,14);
InsertAtHead(head,15);
InsertAtHead(head,16);


 print(head);
 vector<int> nums1;
 vector<int> nums2;
 merge(nums1,nums2);
    return 0;
}