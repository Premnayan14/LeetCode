class Solution {
    public int sum(int[] nums){
        int a=0;
        for(int i=0;i<nums.length;i++){
            a+=nums[i];
        }
        return a;
    }
    // public int cal(int[] nums, int k, int p, int n){
    //     if(n>0){
    //         for(int i=0;i<nums.length;i++){
    //             if(nums[i]<0){
    //                 nums[i]*=(-1);
    //                 k--;
    //             }else{
    //                 break;
    //             }
    //         }
    //     }
    //     if(p!=-1){
    //         while(k>0){
    //             k--;
    //         }
    //         int a=sum(nums);
    //     }

    // }
    public int largestSumAfterKNegations(int[] nums, int k) {
        int ans=0;
        Arrays.sort(nums);
        // int p=-1; int n=0;
        for(int i=0; i<nums.length; i++){
            if(nums[i]>0 || k==0){
                break;
            }else{
                nums[i]*=(-1);
                k--;
            }
        }
        if(k==0){ 
            ans=sum(nums);
        }
        int min= nums.length-1;
        for(int i=0; i<nums.length; i++){
            if(nums[i]<nums[min])min=i;
        }
        while(k>0){
            nums[min]*=(-1);
            k--;
        }
        ans=sum(nums);
        return ans;

        // for(int i=0;i<n)
        // int ans=-1
        // ans=sum(nums,k,p,n);

        // int n=0; int z=0;
        // for(int i=0; i<nums.length; i++){
        //     if(nums[i]>0)continue;
        //     else if(nums[i]==0)z++;
        //     else{
        //         n++;
        //     }
        // }

        // if(n>0){
        //     while(k>0){

        //     }
        // }
    }
}