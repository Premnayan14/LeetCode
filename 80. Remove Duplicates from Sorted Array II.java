class Solution {
    public int removeDuplicates(int[] nums) {

        int k=1;
        int n=nums.length;

        for(int i=1;i<n;i++){
            if(nums[i] != nums[i-1]){
                nums[k]=nums[i];
                k++;
            }else if(k<2 || nums[i] != nums[k-2]){
                nums[k]=nums[i];
                k++;
            }
        }
    //     int j=1;
    //     int i=2;
    //     // nums[0]=
    //    while(j<k){
    //     if(nums[i] != nums[i-1]){
    //         nums[j]=nums[i];
    //         j++;
    //     }else if(i==1 || nums[i]!=nums[i-2]){
    //         nums[j]=nums[i];
    //         j++;
    //     }
    //     i++;
    //    }
        return k;

        // for(int i=0, j=i+1; i<n && j<n-1; i++,j++){
        //     if(nums[i]==nums[j] && nums[i]!=nums[j+1]){
        //         k++;
        //     }else if(nums[j]!=nums[j+1]  && j+1==n-1){
        //         k++;
        //     }else if(nums[i]!=nums[j] ){
        //         k++;
        //     }
        // } return k;
    // //     int k=1;
    // //     int n=nums.length;
    //     for(int i=0, j=i+1; i<n && j<n-1; i++,j++){
    //         if(nums[i]==nums[j] && nums[i]!=nums[j+1]){
    //             k++;
    //         }else if(nums[j]!=nums[j+1]  && j+1==n-1){
    //             k++;
    //         }else if(nums[i]!=nums[j] ){
    //             k++;
    //         }
    //     }
    //         
    //         // else
            
    //         // else if(nums[j+1] != nums[j] && nums[j-1]!=nums[j]){
    //         //     k++;
            // }
            
    //         // System.out.println(k);
    //     }
    //     // int i=0;
    //     // int j=1;
    //     // while(i<n && j<n-1){
    //     //     if(nums[i]==nums[j] && nums[i]!=nums[j+1]){
    //     //         k+=2;
    //     //     }
    //     //     if(num[j]!=nums[i])
    // //   nums[1]=k;  
    //   return k;  
    }
}