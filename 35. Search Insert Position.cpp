class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
                        // 1st way

        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target){
                return i;
            }
        }return nums.size();
        
                        // 2nd way
                        
        // int s=0;
        // for(int i=0;i<nums.size();i++){
        //     if(target==nums[i]){return i;}
        //     if(target<nums[i]){s=i;break;}
        //     if(i==nums.size()-1){return nums.size();}
        // }return s;
        
    }
};