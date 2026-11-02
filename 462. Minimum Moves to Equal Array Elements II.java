class Solution {
    public int minMoves2(int[] nums) {
        Arrays.sort(nums);
        int m=nums[nums.length/2];
        int ans=0;
        for(int i:nums){
            ans+=Math.abs(i-m);
        }
        return ans;
        // long s=0;
        // int ans=0;
        // for(int n:nums){
        //     s+=n;
        // }
        // s/=nums.length;
        // for(int i:nums){
        //     if(i>s){
        //         ans+=i-s;
        //     }else{
        //         ans+=s-i;
        //     }
        // }
        // return ans;
    }
}