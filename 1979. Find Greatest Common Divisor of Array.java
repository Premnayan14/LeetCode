class Solution {
    public int findGCD(int[] nums) {
        int mi=Integer.MAX_VALUE;
        int ma=Integer.MIN_VALUE;
        for(int n:nums){
            if(n>ma)ma=n;
            if(n<mi)mi=n;
        }
        if(ma==mi)return ma;
        else if(ma%mi==0)return mi;

        
        for(int i=mi;i>0;i--){
            if(mi % i==0 && ma % i==0){
                return i;
            }
        }


        return 1;
    }
}