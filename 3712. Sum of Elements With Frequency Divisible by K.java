class Solution {
    public int sumDivisibleByK(int[] nums, int k) {

        int[] freq=new int[101];
        for(int n:nums){
            freq[n]++;
        }
        int sum=0;
        for(int n:nums){
            if(freq[n]%k==0)sum+=n;
        }
        return sum;
        // int s=0;
        // int c=1;
        // Arrays.sort(nums);
        // // if(nums.length==1 && nums[0]==k)return k;

        // // if(nums.length==2 && nums[0]+nums[1]==11)return k-1;
        
        // for(int i=0;i<nums.length-1;i++){
        //     if(nums[i]==nums[i+1]){
        //         c++;
        //     }else {
        //         if(c%k==0){ 
        //         s+=c*nums[i];
        //         }
        //         c=1;
        //     }
        // }
        // if (c % k == 0) {
        //     s += c * nums[nums.length - 1];
        // }

        // return s;
    }
}