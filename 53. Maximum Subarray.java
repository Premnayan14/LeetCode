class Solution {
    public int maxSubArray(int[] nums) {

        int sum=0;
        int maximum=Integer.MIN_VALUE;

        for(int i=0; i<nums.length; i++){
            // step 1: creatnig sum
            // step 2: updating maximum
            // step 3: checking if sum is -ve 
            sum = sum + nums[i];
            maximum = Math.max(sum,maximum);
            if(sum < 0){
                sum=0;
            }
        }
        return maximum;
    }
}