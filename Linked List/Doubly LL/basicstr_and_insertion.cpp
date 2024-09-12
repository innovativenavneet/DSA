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
};
void print(DoublyLL* head){
    DoublyLL* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }
    cout<<endl;
}
int getlength(DoublyLL* head){
    int len=0;
       DoublyLL* temp=head;
       while(temp!=NULL){
       len++;
       temp=temp->next;
    }
    return len;
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
void Insert_at_tail(DoublyLL* &tail,DoublyLL* &head,int d){
     if(tail==NULL){
        DoublyLL* temp= new DoublyLL(d);
        tail= temp;
        head= temp;
       
    }
    
    else{
    
    //new node bnate hai 
    DoublyLL* temp= new DoublyLL(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
    }
}
void Insert_at_anyplace(DoublyLL* &head,DoublyLL* &tail,int pos,int d){
    //insert at head
    if(pos==1){
        Insert_at_head(tail,head,d);
        return;
    }
    DoublyLL* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
     //insert at lst position
    if(temp->next==NULL){
        Insert_at_tail(tail,head,d);
        return;
    }
    DoublyLL* newll= new DoublyLL(d);
    newll->next=temp->next;
    
    temp->next->prev=newll;
    temp->next=newll;
    newll->prev=temp;
    
   

}

int main()
{
    // DoublyLL* node1= new DoublyLL(10);
    // DoublyLL* head= node1;//ek head poninter hai jo av node1 ko point kr rha hai
    // DoublyLL* tail= node1;
    
     DoublyLL* tail= NULL;
     DoublyLL* head=NULL;
    cout<<getlength<<endl;

    Insert_at_head(tail,head,11);
    Insert_at_head(tail,head,15);
    Insert_at_head(tail,head,89);
    Insert_at_head(tail,head,76);
    Insert_at_head(tail,head,47);
    // DoublyLL* node1= new DoublyLL(20);
    print(head);
    Insert_at_tail(tail,head,12);
    print(head);
    Insert_at_anyplace(head,tail,7,7888);
     print(head);

    return 0;
}