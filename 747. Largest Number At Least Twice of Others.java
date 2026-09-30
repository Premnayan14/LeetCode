class Solution {
    public int dominantIndex(int[] nums) {
        // int max = 0; int max2 = 1;
        // for(int i=0;i<nums.length;i++){
        //     if(nums[i]>max){
        //         max2=max; max=i;
        //     }else if(nums[i]<nums[max] && nums[i]>nums[max2]){
        //         max2=i;
        //     }
        // }
        // return nums[max]>=nums[max2]*2?max:-1;
        int max=0; int max2=-1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]>nums[max])max=i;
        }
        if(max!=0)max2=0;
        else if(max!=1)max2=1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]<nums[max] && nums[i]>nums[max2]){
                max2=i;
            }
        }
        return nums[max]>=nums[max2]*2?max:-1;
    }
}