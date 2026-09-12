class Solution {
    public int[] runningSum(int[] nums) {
        /*for(int i=1; i<nums.length; i++){
            nums[i]+= nums[i-1];
        }
        */
        int i=1;
        while(nums.length > i){
            nums[i]+=nums[i-1];
            i++;
        }
        return nums;
    }
}