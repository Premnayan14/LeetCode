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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* preva = list1;
        for(int i=0;i<a-1;i++){
            preva=preva->next;  // Node before 'a'
        }
         
        ListNode* afterb = preva;
        for(int i=0;i<(b-a+2);i++){
            afterb=afterb->next;   //node after 'b'
        }

        preva->next = list2;       // Connect list1 -> list2

        ListNode* tail2 = list2;
        while(tail2->next){
            tail2=tail2->next;     // Traverse to end of list2
        }

        tail2->next=afterb; 
        return list1;       // Connect end of list2 -> afterb 

    }
};