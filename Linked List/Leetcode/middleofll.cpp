#include <iostream>

using namespace std;

// Definition for singly-linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    // Function to find the middle node of the linked list
    ListNode* middleNode(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

// Function to create a linked list from an array of integers
ListNode* createLinkedList(int arr[], int n) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int i = 0; i < n; ++i) {
        ListNode* newNode = new ListNode(arr[i]);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

// Function to print the elements of a linked list
void printLinkedList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Example usage
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create linked list
    ListNode* head = createLinkedList(arr, n);

    // Print original linked list
    cout << "Original linked list: ";
    printLinkedList(head);

    // Find and print the middle node
    Solution solution;
    ListNode* middle = solution.middleNode(head);
    cout << "Middle node: " << middle->val << endl;

    return 0;
}
