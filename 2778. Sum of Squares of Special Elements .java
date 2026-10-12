class Solution {
    public int sumOfSquares(int[] nums) {
        int s=0; int n=nums.length;
        for(int i=0; i<n-1; i++){
            if(n%(1+i)==0)s+=nums[i]*nums[i];
            // if(n%1+i ==0)s+=nums[i+1]*nums[i+1];
            // if(n%i+1==0)s+=nums[i]*nums[i];
        }
        
        return s+nums[n-1]*nums[n-1];
    }
}