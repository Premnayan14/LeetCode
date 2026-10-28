class Solution {
    public int mostFrequentEven(int[] nums) {
        // int s;
        // int m=-1;
        Arrays.sort(nums);
        int ans=-1; int mf=0;
        for(int i=0; i<nums.length; ){
            int j=i;
            while(j<nums.length && nums[j]==nums[i]){
                j++;
            }
            int freq=j-i;
            if(nums[i]%2==0 && freq > mf){
                mf=freq;
                ans=nums[i];
            }
            i=j;
        }
        return ans;

        // for(int i=0; i<nums.length;i++){
        //     if(nums[i]%2==0 && nums[i+1]%2==0){

        //     }
        // }
    }
}