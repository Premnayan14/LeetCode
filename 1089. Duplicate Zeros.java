class Solution {
    public void duplicateZeros(int[] arr) {
        int r=arr.length;
        int ans[] = new int[r];
        int j=0;
        // for(int i=0;i<arr.length;i++){
        //     if(arr[i]==0){
        //         j++;
        //     }
        //     // else{
        //     //     arr[j]=ans[i];
        //     // }
        // }
        // if(j==0)return arr;
        for(int i=0;i<arr.length;i++){
            if (j >= r) break;

            ans[j]=arr[i];
            j++;

            if(arr[i]==0 && j<r){
                ans[j]=0; j++;
            }
        }
        System.arraycopy(ans,0,arr,0,r);
    }
}