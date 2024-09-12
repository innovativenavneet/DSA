#include<bits/stdc++.h>
using namespace std;

// Define ListNode structure
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
// Approach 1::
    ListNode* detectCycle1(ListNode* head) {
        map<ListNode*, int> visited;

        ListNode* temp = head;
        while (temp != NULL) {
            if (visited[temp] == 1) {
                return temp;
            }
            visited[temp] = 1;
            temp = temp->next;
        }
        return NULL;
    }
    // Approach 2:
    ListNode* detectCycle2(ListNode* head){
    ListNode* slow=head;
    ListNode* fast=head;
    while (head!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL){
         fast=fast->next;
        }
        slow= slow->next;
        if (slow==fast){

        
        return slow->next;
        }
      
        
    }
      return NULL;

    }
    // Approach 3:
    void removeloop(ListNode* head){
        ListNode* remove=detectCycle2(head);
        ListNode* temp= remove;
        while (temp->next !=remove)
        {temp=temp->next;
            
        }
        temp->next=NULL;
        
    }
};

int main() {
    Solution s;
    // Example usage:
    // Create a linked list with a cycle
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    head->next->next->next->next = head->next; // Create a cycle

    ListNode* cycleNode = s.detectCycle1(head);
    if (cycleNode) {
        cout << "Cycle detected at node with value: " << cycleNode->val << endl;
    } else {
        cout << "No cycle detected." << endl;
    }
     ListNode* cycleNode2 = s.detectCycle2(head);
    if (cycleNode2) {
        cout << "Cycle detected at node for 2nd app with value: " << cycleNode2->val << endl;
    } else {
        cout << "No cycle detected." << endl;
    }
    ListNode* removeloop(head);

    return 0;
}
