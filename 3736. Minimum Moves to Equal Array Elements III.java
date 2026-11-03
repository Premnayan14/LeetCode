public class Solution {
    public int minMoves(int[] nums) {
        int m=-1;
        // int c=0;
        int s=0;
        for(int n:nums){
            m=Math.max(n,m);
            // else if(m==n)c++;
            s+=n;
        }
        // int ans = Math.max((m*(nums.length-c)),s) - Math.min((m*(nums.length-c)),s);
        // (m*nums.length)-s;
        return m*nums.length-s;
    }
}
