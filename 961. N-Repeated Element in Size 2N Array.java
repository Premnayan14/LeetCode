class Solution {
    public int repeatedNTimes(int[] nums) {
        int n=nums.length;
        int s=-1;
        Arrays.sort(nums);
        for(int i=0; i<nums.length*2-1; i++){
            if(nums[i]==nums[i+1]){
            return nums[i];
            }
        }
        return s;
    }
}