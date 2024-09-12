#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node* next;
// constructor
Node(int d){
    this->data=d;
    this->next= NULL;

}
~Node(){
    int value=this->data;
    if(this->next!=NULL){
        delete next;
        next= NULL;
    }
    cout<<"memory is free for node with data : "<<value<<endl;
}
};
// in circular LL we don't need head to iterate we only need tail to iterate b/w
// elements (tail can access last node as well as first node)

// INSERTION Operation:
// hum pehle data khoj lete hai uske baad uss data k aadhar pr usse hum next mein new
// node daal dete hai (uske next mein).
// Cases:
// 1. agar LL empty hoto 
//   if tail is empty (NULL)::
//   a> hum new node bnayenge 
//   b> tail ko temp k equal krenge
//   c> temp k next ko temp k equal krenge (mtlb apne aap se hi jod dete hai.)
// 2. agar LL m 1 node present hoto
    //  a>sabse pehle hum element ko dundhenge(agar mila to)
    //  b>forward naam k ek pointer m curr k next ko store krwa denge(abhi curr ka next 
    //    khud ko hi point kr rha hai)
    //  c>ab hum curr k next ko hum temp se point krwayenge(taki naye or purane wale m rel bn paye)
    //  d>fir hum temp k next ko forward k equal bna denge(taki circular LL bni rhe)
    //  Inshort :
    //  hum ek node create kr rhe hai (temp)
    //  temp k next ko curr k next se point krwa rhe hai
    //  curr k next ko temp se point krwa rhe hai 

void insert_node(Node* &tail, int ele, int data){
    if (tail == NULL){
        Node* newnode= new Node(data);
        tail=newnode;
        newnode->next=newnode;
    }
    else{
         
       
        Node* curr = tail;
    
        while(curr->data!=ele){
         curr=curr->next;
        }
        // element is found and curr is at it
        Node* temp=new Node(data);
        temp->next= curr->next;// this will applicable to all cases
        curr->next=temp;
        
    }

}

void print(Node* tail){
    // sbse pehle hm tail ka loc save krwate hai
    Node* temp = tail;
    if(tail==NULL){
          cout<<"The list is empty"<<endl;
          return;
    }
    else{
    do{
        cout<<tail->data<<" ";
        tail= tail-> next;
    }
    while(tail!=temp);
      
   cout<<endl;
    }
}

// LL deletion: 
// 1.sbse pehle hum jo element ko delete krwana chahte hai usse i/p krwa lete hai 
// 2. fir prev k next ko curr k next se equal krwa dete hai
// 3. curr k next ko null se equal krwa dete hai
// 4. memeory free krwa dete hai
void deleteNode(Node* &tail, int value){
    //empty list 
    if(tail==NULL){
        cout<<"list is empty , check again "<<endl;
        return ;
    }
    else{
        // for non empty value 
        // assuming that value is present 
        Node* prev=tail;
        Node* curr= prev->next;
        while(curr->data!=value){
            prev=curr;
            curr=curr->next;

        }
        prev->next=curr->next;
        if(curr==prev){
            tail=NULL;
        }
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }

}
int main()
{
// sbse pehla element null hai
Node* tail= NULL;
insert_node(tail,4,667);
print(tail);
insert_node(tail,667,777);
insert_node(tail,777,43);
insert_node(tail,43,88);
insert_node(tail,88,32);
insert_node(tail,32,69);
print(tail);
 deleteNode(tail,667);
print(tail);
// deleteNode(tail,777);
// print(tail);


    return 0;
}