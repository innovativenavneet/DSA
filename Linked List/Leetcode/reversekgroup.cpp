#include<bits/stdc++.h>
using namespace std;

// Define the ListNode structure
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;
        
        // Count the number of remaining nodes
        while (curr != NULL && count < k) {
            curr = curr->next;
            count++;
        }
        
        // If there are enough nodes to reverse
        if (count == k) {
            curr = head;
            ListNode* prev = NULL;
            ListNode* next = NULL;
            count = 0;
            // Reverse the current group of k nodes
            while (curr != NULL && count < k) {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
                count++;
            }
            // curr is now the (k+1)th node
            // Recursively reverse the rest of the list
            if (curr != NULL) {
                head->next = reverseKGroup(curr, k);
            }
            return prev; // prev now points to the new head of the reversed group
        }
        
        // If there are less than k nodes remaining, return head (no need to reverse)
        return head;
    }
};

int main() {
    // Create a linked list for testing
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(7);
    head->next->next->next = new ListNode(8);
    head->next->next->next->next = new ListNode(9);
     head->next->next->next->next->next = new ListNode(11);

    // Create an instance of the Solution class
    Solution sol;

    // Call the reverseBetween function
    ListNode* reversedList = sol.reverseKGroup(head, 2);

    // Output the reversed list
    while (reversedList != nullptr) {
        std::cout << reversedList->val << " ";
        reversedList = reversedList->next;
    }
    std::cout << std::endl;

    return 0;
}

