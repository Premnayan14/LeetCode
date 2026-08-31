class Solution {
    public int[] resultArray(int[] nums) {
        int n=nums.length;
        int result[]=new int[n];
        // result[0]=nums[0];
        // result[1]=nums[1];
        // for(int i=2; i<=n-1; i++){
        //     result[i]=nums[i];
        // }
        // return result;
        int arr1[]=new int[n];
        int arr2[]=new int[n];
        arr1[0]=nums[0]; arr2[0]=nums[1];
        int ar1l=0; int ar2l=0;
        for(int i=2;i<=n-1;i++){
            if(arr1[ar1l] > arr2[ar2l]){
                arr1[ar1l+1]=nums[i];
                ar1l++;
            }else{
                arr2[ar2l+1]=nums[i];
                ar2l++;
            }
        }
        int j=0;
        for(int i=0; i<=n-1; i++){
            if(i<=ar1l){ 
            result[i]=arr1[i];
            }else{
                result[i]=arr2[j]; j++;
            }
        } return result;
        // for(int i=ar1l+1; i<=n-1; i++){
        //     resutl[i]=arr2[ar2l];
        // }
        // for(int i=0,j=0; i<=n,j<=n; i++,j++){
        //     arr1[i]=
        //     arr1[i]=
        //     arr1[i]=
        //     arr1[i]=
        // }
    }
}