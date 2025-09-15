class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        if (n==1 || n==2) return nums[0];
        sort(nums.begin(),nums.end());
        if(nums[n/2] == nums[(n/2)+1] && nums[n/2]>nums[(n/2)-1]){
            return nums[n-1];
        }
        else return nums[(n/2)-1];
    }
};