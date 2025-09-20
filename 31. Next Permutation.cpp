class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // 1st method;
        // next_permutation(nums.begin(),nums.end());
        
        //2nd method; 
        int n=nums.size();
        // Find the pivot index
        int p=-1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                p=i; 
                break;
            }      
        }
        if(p==-1){
            reverse(nums.begin(),nums.end());
            return ;
        }
        // find the element from the right that is greater than pivot
        for(int i=n-1;i>p;i--){
            if(nums[i]>nums[p]){
                swap(nums[i],nums[p]);
                break;
            }
        }
        // Reverse the elements from pivot + 1 to the end to get the next permutation
    reverse(nums.begin() + p + 1, nums.end());
    }
};