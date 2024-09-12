#include<bits/stdc++.h>
using namespace std;
/*Given the head of a sorted linked list,
 delete all duplicates such that each element appears only once. 
Return the linked list sorted as well
Input: head = [1,1,2]
Output: [1,2]*/


  
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* temp = head;
        while(temp->next!=NULL){
            
            if(temp->val==temp->next->val){
                ListNode* del=temp->next->next;
                ListNode* deleted= temp->next;
                delete(deleted);
                temp->next=del;
            }
                else{
                    temp=temp->next;
                }
                
            
            
        }
        return head;
    }
};

int main() {
    // Create a linked list for testing
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);
     head->next->next->next->next->next = new ListNode(4);

    // Create an instance of the Solution class
    Solution sol;

    // Call the reverseBetween function
    ListNode* duplicates = sol.deleteDuplicates(head);

    // Output the reversed list
    while (duplicates != nullptr) {
        std::cout << duplicates->val << " ";
        duplicates = duplicates->next;
    }
    std::cout << std::endl;

    return 0;
}
