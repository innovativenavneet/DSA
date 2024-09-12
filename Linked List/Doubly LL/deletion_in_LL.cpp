// Approach:
// Deletion in doubly LL can be carried out in following steps:
//for node in 1st position
// 1. sbse pehle prev wala relation todenge
//    means agar agar ek node "temp" ko delete karna hai to
//    hm temp->next->prev=NULL bna denge mtlb temp k baad wale 
//    se uska previous wala relation tut gya 
// 2. head ko hum temp k next m shift kr denge
//    head= temp->next
// 3. ab hum temp k next wale relation ko tudwayenge 
//    temp->next = NULL krwa kr temp ka next wala relation v tut gya
// 4. Uske baad hm memory free krwa denge destructor ko bna kr 

//for node in middle or last position
// 1. sbse pehle hm jo av node hai uske pehle wale se relation todte hai
//    curr->prev=NULL
// 2.fir hm curr k pehle wale node se uske next wale node se jodte hai 
//   prev->next= curr->next;
// 3.fir hum curr k next wale relation ko todte hai     
//   curr-> next =NULL
//  4 memory free krwa lete hai

#include<bits/stdc++.h>
using namespace std;
class DoublyLL{
    public:
 DoublyLL* prev;
 DoublyLL* next;
 int data;
// this is constructor
 DoublyLL(int d){//here we are making single dLL
    this->data=d;
    this->next=NULL;
    this->prev=NULL;
 }
//  this is destructor
 ~DoublyLL( ){
    int val=this->data;
    if(next!=NULL){
        delete next;
        next=NULL;
    }
    cout<<"memory free for node  "<<val<<endl;
}
};
void print(DoublyLL* head){
    DoublyLL* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    cout<<endl;
}
void Insert_at_head(DoublyLL* &tail,DoublyLL* &head,int d){
    if(head==NULL){
        DoublyLL* temp= new DoublyLL(d);
        head= temp;
        tail= temp;
    }
    else{
    // new node created "temp"
    DoublyLL* temp= new DoublyLL(d);

    // ab hum temp k next ko head p daal denge
    // or head k prev ko temp p
    // fir head ko back shift krke temp pr lete aayenge
    temp->next=head;
    head->prev=temp;
    head=temp;
    }

}


   
void deletenode(int pos, DoublyLL* &head){
    //deleting first or start node
    if(pos==1){
        DoublyLL* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;//take refrence from above
        delete temp;
    }
    else{
        //deleting any middle node or last node
        DoublyLL* curr= head;
        DoublyLL* prev= NULL;

        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr= curr->next;
            cnt++;
        }
         curr->prev=NULL;
         prev->next= curr->next;
         curr-> next =NULL;
         delete curr;



    }
}
int main()
{
       DoublyLL* tail= NULL;
    

     DoublyLL* head=NULL;


    Insert_at_head(tail,head,11);
    Insert_at_head(tail,head,15);
    Insert_at_head(tail,head,89);
    Insert_at_head(tail,head,76);
    Insert_at_head(tail,head,47);
     print(head);
    deletenode(3,head);
      print(head);
          deletenode(1,head);
      print(head);
          deletenode(3,head);
      print(head);
    return 0;
}

