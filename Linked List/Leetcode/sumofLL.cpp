/* leetcode 2. Add Two Numbers

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
*/


#include<bits/stdc++.h>
using namespace std;

class Node {
public:

    int val;
    Node *next;
    Node(int d) {
        this-> val=d; 
        this->next=NULL;
    }
    Node* addTwoNumbers(Node* l1, Node* l2) {
        // defining a dummy node (initially)
    Node* dummynode= new Node(-1);
    Node* curr= dummynode;
    Node* temp1= l1;
    Node* temp2= l2;
    int carry=0;
    
    while (temp1 !=NULL || temp2 !=NULL)
    {
        int sum=carry;
        if(temp1) sum+= temp1->val;
        if(temp2) sum+= temp2->val ;
        

        Node* newnode= new Node(sum%10);
        carry= sum/10;
        curr->next=newnode;
        curr=curr->next;
        if(temp1) temp1=temp1->next;
        if(temp2) temp2= temp2->next;

    }

    if (carry)
    {
        Node * newnode = new Node(carry);
        curr->next=newnode;

    }
    return dummynode->next;
    
    
       
    }
};

int main() {
    // Create instances of Node for testing
    Node* node1 = new Node(2);
    Node* node2 = new Node(4);
    Node* node3 = new Node(3);
    
    Node* node4 = new Node(5);
    Node* node5 = new Node(6);
    Node* node6 = new Node(4);

    // Link nodes for the first list: 2 -> 4 -> 3
    node1->next = node2;
    node2->next = node3;

    // Link nodes for the second list: 5 -> 6 -> 4
    node4->next = node5;
    node5->next = node6;

    // Test addTwoNumbers function
    Node* result = node1->addTwoNumbers(node1, node4);

    cout<<"Printing the result"<<endl;
    cout<<"sum of 2 -> 4 -> 3 and  5 -> 6 -> 4 is : ";
    while (result != nullptr) {
        cout << result->val << " ";
        result = result->next;
    }
    cout << endl;

    return 0;
}
