/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create a dummy node to handle cases where the head needs to be removed
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        // Initialize two pointers, fast and slow, both pointing to the dummy node
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        
        // Move fast pointer to the nth node from the beginning
        for (int i = 0; i < n + 1; i++) {
            fast = fast->next;
        }
        
        // Move fast pointer to the end, maintaining the gap of n between fast and slow
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }
        
        // Remove the nth node from the end
        slow->next = slow->next->next;
        
        // Store the head of modified list
        ListNode* newHead = dummy->next;
        
        // Delete the dummy node
        delete dummy;
        
        return newHead;
    }
};
