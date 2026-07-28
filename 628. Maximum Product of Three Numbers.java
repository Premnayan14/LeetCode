class Solution {
    public int maximumProduct(int[] nums) {
        Arrays.sort(nums);
        int z=nums.length;
        int a=nums[z-1]*nums[z-2]*nums[z-3];
        int b=nums[0] * nums[1] * nums[z-1];
        return Math.max(a,b);
    }
}