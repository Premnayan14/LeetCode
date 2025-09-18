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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* next = curr->next; // store next
            curr->next = prev;           // reverse link
            prev = curr;                 // move prev forward
            curr = next;                 // move curr forward
        }
        return prev;
    }
};
// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         // base case
//         if (head == NULL || head->next == NULL) return head;

//         ListNode* newHead = reverseList(head->next); // reverse rest
//         head->next->next = head; // point back
//         head->next = NULL;       // make current tail
//         return newHead;
//     }
// };
