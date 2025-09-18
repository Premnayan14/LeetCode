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
    ListNode* reverseKGroup(ListNode* head, int k) {
        // base case;
        if(head==NULL || k==1){
            return head;
        } 
        // checking if k nodes left is less than 3
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL && count<k){
            temp=temp->next;
            count++;
        }
        if(count < k){
            return head;
        }
        
        // step 1:Reverse first k-node
        ListNode* next=NULL;
        ListNode* curr=head;
        ListNode* prev=NULL;
        int c=0;
        while(curr!=NULL && c<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            c++;
        }
        head->next=reverseKGroup(curr,k);
        // step 3:return head
        return prev;
    }
};