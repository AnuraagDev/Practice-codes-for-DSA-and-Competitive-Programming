class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        
        
        // Move fast pointer n steps ahead
        for (int i = 0; i < n; ++i) {
            fast = fast->next;
        }
        
        // If fast is NULL, then we need to remove the head node
        if (fast == NULL) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        
        // Move both pointers until fast reaches the end
        while (fast->next != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        
        // Remove the nth node from the end
        ListNode* nodeToDelete = slow->next;
        slow->next = nodeToDelete->next;
        delete nodeToDelete;
        
        return head;
    }
};
