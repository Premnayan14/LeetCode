class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            for(int j=1+i;j<nums.size();j++){
                if(nums[i]+nums[j]<target){
                c++;
            }
            }
        }return c;
    }
};