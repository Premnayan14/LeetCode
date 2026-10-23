// class Solution {
//     public int findTargetSumWays(int[] nums, int target) {
        
//     }
// }
class Solution {
    public int answer(int[] nums, int target, int i, int s){
        if(i==nums.length){
            if(target==s)return 1;
            else return 0;
        }
        int a=s+nums[i];
        int b=s-nums[i];
        return answer(nums,target,i+1,a)+answer(nums,target,i+1,b);

    }
    public int findTargetSumWays(int[] nums, int target) {
        return answer(nums, target, 0, 0);
    }
}