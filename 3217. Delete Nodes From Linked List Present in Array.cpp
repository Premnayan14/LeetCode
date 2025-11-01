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
private:
    void deletenode(ListNode* prev,ListNode* cur){
        prev->next=cur->next;
        // delete cur;
    }

        // Binary Search (since no set/map allowed)
    bool exists(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target) return true;
            if (nums[mid] < target) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        if(!head) return head;
        sort(nums.begin(),nums.end());

        ListNode* dummy=new ListNode(0);
        dummy->next=head;

        ListNode* prev=dummy;
        ListNode* cur=head;
      
      while(cur!=NULL){
        // bool f=0;
        // for(int i=0;i<nums.size();i++){
        //     if(cur->val==nums[i]){
        //         f=1;
        //         break;
        //     }
        // }
        if(exists(nums,cur->val)){
            deletenode(prev,cur);
            cur=prev->next;
        }else{
            prev=cur;
            cur=cur->next;
        }
      } 
      return dummy->next; 
    }
};