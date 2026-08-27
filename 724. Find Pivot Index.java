class Solution {
    public int pivotIndex(int[] nums) {
        int totalsum=0;
        for(int x:nums)totalsum+=x;
        int rel=0;
        for(int i=0; i<nums.length; i++){
            int lel = totalsum - rel -nums[i];
            if(rel == lel)return i;
            rel+=nums[i];
        }
        return -1;
    }
}