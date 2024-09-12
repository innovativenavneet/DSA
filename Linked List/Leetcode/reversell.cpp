#include <iostream>

// Define the ListNode structure
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Define the Solution class
class Solution {
public:
    // Function to reverse a linked list
    ListNode* reverseLL(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        // Iterate through the list and reverse the pointers
        while (curr != nullptr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev; // Return the new head of the reversed list
    }

    // Function to reverse a part of the linked list between 'left' and 'right' indices
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        // Check for empty list or single node
        if (!head || head->next == nullptr) {
            return head;
        }
        left--; // Decrement left and right to convert them to zero-based indexing
        right--;

        // Define three dummy nodes to hold parts of the linked list during reversal
        ListNode* dummy1 = new ListNode(-1); // Nodes before 'left'
        ListNode* dummy2 = new ListNode(-1); // Nodes between 'left' and 'right'
        ListNode* dummy3 = new ListNode(-1); // Nodes after 'right'

        ListNode* head1 = dummy1; // Pointer to the head of dummy1
        ListNode* head2 = dummy2; // Pointer to the head of dummy2
        ListNode* head3 = dummy3; // Pointer to the head of dummy3

        ListNode* temp = head; // Temporary pointer to iterate through the original list
        // Extract nodes before 'left' index
        for (int i = 0; i < left; i++) {
            dummy1->next = new ListNode(temp->val);
            temp = temp->next;
            dummy1 = dummy1->next;
        }

        // Extract nodes between 'left' and 'right' indices
        for (int i = left; i <= right; i++) {
            dummy2->next = new ListNode(temp->val);
            temp = temp->next;
            dummy2 = dummy2->next;
        }

        // Extract nodes after 'right' index
        while (temp != nullptr) {
            dummy3->next = new ListNode(temp->val);
            temp = temp->next;
            dummy3 = dummy3->next;
        }

        ListNode* dummy = head2->next; // Pointer to the head of dummy2
        ListNode* node = reverseLL(head2->next); // Reverse the sublist between 'left' and 'right'
        dummy1->next = node; // Connect the reversed sublist to the previous nodes

        // Connect the reversed sublist to the nodes after 'right'
        dummy->next = head3->next;

        return head1->next; // Return the head of the modified linked list
    }
};

int main() {
    // Create a linked list for testing
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Create an instance of the Solution class
    Solution sol;

    // Call the reverseBetween function
    ListNode* reversedList = sol.reverseBetween(head, 2, 4);

    // Output the reversed list
    while (reversedList != nullptr) {
        std::cout << reversedList->val << " ";
        reversedList = reversedList->next;
    }
    std::cout << std::endl;

    return 0;
}
