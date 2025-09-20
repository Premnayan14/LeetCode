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
                // counting approach    
         if (head->next == nullptr) return nullptr; // only one node

        // Step 1: Count total nodes
        ListNode* cur = head;
        int count = 1;
        while (cur->next != nullptr) {
            count++;
            cur = cur->next;
        }

        // Step 2: Find position from start to remove
        int pos = count - n; // 0-based index from start (node to delete is at pos)
        
        // Edge case: remove head
        if (pos == 0) {
            ListNode* nodeToDelete = head;
            head = head->next;
            delete nodeToDelete;
            return head;
        }

        // Step 3: Traverse to the node just before the one to remove
        cur = head;
        for (int i = 1; i < pos; i++) {
            cur = cur->next;
        }

        // Step 4: Delete the node
        ListNode* nodeToDelete = cur->next;
        cur->next = cur->next->next;
        delete nodeToDelete;

        return head;
        

              //   two pointer approach
        // Dummy node to handle edge case when head is removed
        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // Move fast pointer n+1 steps ahead
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        // Move both pointers until fast reaches end
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Now slow is just before the node to delete
        ListNode* nodeToDelete = slow->next;
        slow->next = slow->next->next;
        delete nodeToDelete;

        return dummy->next;

        
    }
};