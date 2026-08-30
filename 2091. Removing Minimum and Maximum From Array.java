class Solution {
    public int minimumDeletions(int[] nums) {
        int n=nums.length;
        int mini=-1; int maxi=-1;
        int min=Integer.MAX_VALUE; int max=Integer.MIN_VALUE;
        for(int i=0; i<n; i++){
            if(nums[i] < min){
                min=nums[i]; mini=i;
            }if(nums[i] > max){
                max= nums[i]; maxi=i;
            }
        }
        // int r1=0;
        //if((mini <= n/2 && maxi >= n/2) || (mini >= n/2 && maxi <= n/2)){
        int left= Math.max(mini,maxi)+1;
        //+n-Math.max(maxi,mini);}
        // int r2=0;
        // if(mini >= n/2 && maxi >= n/2){ 
        int right= n-Math.min(mini,maxi);
        //}
        // if(mini <= n/2 && maxi <= n/2){
        int both=Math.min(mini,maxi)+1+n-Math.max(mini,maxi);
        // }
        int r=Math.min(left,Math.min(right,both));
        return r;
    }
}