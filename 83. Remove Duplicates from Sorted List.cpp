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
    ListNode* deleteDuplicates(ListNode* head) {
    //   if(head==NULL)return NULL;
      ListNode* cur=head; 
    //   while(cur->next!=NULL){
    //     if(cur->val==cur->next->val){
    //         ListNode* nexty=cur->next->next;
    //         ListNode* todel=cur->next;
    //         delete(todel);
    //         cur->next=nexty;
    //     }
    //     else{
    //         cur=cur->next;
    //     }
    //   }return head;
    while(head!=NULL && head->next!=NULL){
        if(head->val==head->next->val)head->next=head->next->next;
        else head=head->next;
    }return cur;
    }
};