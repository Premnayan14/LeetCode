class Solution {
    public int minMoves(int[] nums) {
        int n = Integer.MAX_VALUE;
        int s=0;
        for(int sea:nums){
            if(sea<n)n=sea;
        }
        for(int i=0;i<nums.length;i++){
            if(n==nums[i]){
                continue;
            }else{
                s+=nums[i]-n;
            }
        }
        return s;
    }
}