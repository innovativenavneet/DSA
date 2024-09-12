/*this code defines a simple linked list node and demonstrates
//  how to create an instance of this node class and
  // access its data and next pointer. 
  // It's a basic building block for constructing a linked list data structure.*/

  
#include<bits/stdc++.h>
using namespace std;
class node{
 public:
 int data;//This member stores the data value associated with the node.
 node* next;//This is a pointer to the next node in the linked list. It's initially set to NULL
 node(int d){/* This is the constructor for the node class.
  It takes an integer data as a parameter and
 initializes the data member with the provided value and
  sets the next pointer to NULL.*/
    this -> data= d;
    this -> next= NULL;
 }

   };
 

int main()
{
 node* node1= new node(10);/*This line creates a new node object,
  node1, with a data value of 10.It uses dynamic memory allocation 
  (new) to create the object jb bhi hm ye bna rhe h to constructor call hoga */
 cout<< node1 -> data <<endl;//This line prints the data value of node1, which is 10.
 cout<< node1 -> next <<endl;
                           /*This line prints the next pointer of node1.
  It will print the memory address stored in node1->next,
   which is initially NULL`.*/
  

    return 0;
}