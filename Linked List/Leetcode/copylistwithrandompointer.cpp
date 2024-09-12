/*Leetcode 138.> Copy List with Random Pointer

A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.

Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.

For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list, x.random --> y.

Return the head of the copied linked list.

The linked list is represented in the input/output as a list of n nodes. Each node is represented as a pair of [val, random_index] where:

val: an integer representing Node.val
random_index: the index of the node (range from 0 to n-1) that the random pointer points to, or null if it does not point to any node.
Your code will only be given the head of the original linked list.


Input: head = [[7,null],[13,0],[11,4],[10,2],[1,0]]
Output: [[7,null],[13,0],[11,4],[10,2],[1,0]]


*/
#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int val) {
        this->val = val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if (!head) return nullptr;

        // Step 1: Create a copy of each node and insert it next to its original node
        Node* curr = head;
        while (curr) {
            Node* copy = new Node(curr->val);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }

        // Step 2: Update random pointers in the copied list
        curr = head;
        while (curr) {
            if (curr->random)
                curr->next->random = curr->random->next;
            curr = curr->next->next;
        }

        // Step 3: Separate the original and copied lists
        curr = head;
        Node* copiedHead = head->next;
        Node* copiedCurr = copiedHead;
        while (curr) {
            curr->next = curr->next->next;
            curr = curr->next;
            if (copiedCurr->next) {
                copiedCurr->next = copiedCurr->next->next;
                copiedCurr = copiedCurr->next;
            }
        }

        return copiedHead;
    }

};
int main()
{

    Node* head=new Node( 5);

    head->next= new Node(7);
        head->random= head->next->next;
    head->next->random= head;
    head->next->next= new Node(9);
    head->next->next->random= head;
    head->next->next->next= new Node(10);
    head->next->next->next->random= head->next->next;

    Solution s;
    Node* ans= s.copyRandomList(head);
    while(ans!=NULL){
        cout<<ans->val;
     if (ans->random != nullptr) {
        cout << ans->random->val;  // Print the value of random's val
    } else {
        cout << "null";  // If random is null, print "null"
    }
    cout << endl;
        ans=ans->next;
    }


    return 0;
}