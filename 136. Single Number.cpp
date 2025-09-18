class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xr=0;
        for(int i=0;i<nums.size();i++){
            xr=xr^nums[i];
        }return xr;
        // sort(nums.begin(),nums.end());
        // int a=-1;
        // if(nums.size()==1){
        //     return nums[0];
        // }
        // for(int i=0;i<nums.size()-1;i=i+2){
        //     if(nums[i]!=nums[i+1]){
        //         return nums[i];
        //     }
        // }return nums[nums.size()-1];
    }
};