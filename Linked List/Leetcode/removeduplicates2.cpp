/*82. Remove Duplicates from Sorted List II
Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.
 Return the linked list sorted as well.
 Input: head = [1,2,3,3,4,4,5]
Output: [1,2,5]
*/
#include<bits/stdc++.h>
using namespace std;
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
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy;
        ListNode* current = head;
        
        while (current != nullptr) {
            while (current->next != nullptr && current->val == current->next->val) {
                ListNode* temp = current;
                current = current->next;
                delete temp;
            }
            if (prev->next == current) {
                prev = prev->next;
            } else {
                prev->next = current->next;
            }
            current = current->next;
        }
        
        ListNode* newHead = dummy->next;
        delete dummy;
        return newHead;
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