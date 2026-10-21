class Solution {
    static boolean isvalid(int[] weights, int days, int mid){
        int dc=1;
        int w=0;
        for(int i=0;i<weights.length;i++){
            if(weights[i]+w<=mid){
                w+=weights[i];
            }else{
                dc++;
                if(dc>days || weights[i]>mid)return false;
                else{
                    w=0;
                    w+=weights[i];
                }
            }
        }
        return true;
    }
    public int shipWithinDays(int[] weights, int days) {
        int n=weights.length;
        int s=1;
        int e=0;
        for(int i=0; i<n; i++){
            e+=weights[i];
        }
        int ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isvalid(weights,days,mid)){
                ans=mid;
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return ans;

    }
}