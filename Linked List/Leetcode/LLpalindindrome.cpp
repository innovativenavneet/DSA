/*leetcode 234.> Palindrome Linked List

Given the head of a singly linked list, return true if it is a 
palindrome
 or false otherwise.
 Input: head = [1,2,2,1]
 Output: true*/




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
    bool isPalindrome1(ListNode* head) {
        map<ListNode*, int> frequency;
        ListNode* temp = head;
        while (temp != NULL) {
            frequency[temp]++;
            temp = temp->next;
        }
        temp = head;
        while (temp != NULL) {
            if(frequency[temp]>1){
                return false;
            }
            temp = temp->next;
        }
        return true;
    }
    

ListNode* findmiddle(ListNode* head){
    ListNode* slow=head;
    ListNode* fast= head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast= fast->next->next;
        slow= slow->next;
    }
    return slow;
}
ListNode* reverse(ListNode* temp){
ListNode* curr=temp;
ListNode* prev=NULL;
ListNode* next=NULL;
while(curr!=NULL){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
}
return prev;
}
    bool isPalindrome2(ListNode* head) {
        ListNode* mid=findmiddle(head);
        ListNode* temp= mid->next;
        mid->next=reverse(temp);
        ListNode* head1= head;
        ListNode* head2= mid->next;
        while(head2!=NULL){
            if(head1->val!=head2->val){
                return false;
            }
            head1= head1->next;
            head2=head2->next;
        }
             temp= mid->next;
        mid->next=reverse(temp);

        return true;
    
    }

};

int main() {
    // Create a linked list for testing
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(2);
     head->next->next->next->next->next = new ListNode(1);

    // Create an instance of the Solution class
    Solution sol;

    // Call the reverseBetween function
    bool duplicates = sol.isPalindrome1(head);
    // Output the reversed list
    cout<<duplicates;
    std::cout << std::endl;

    return 0;
}