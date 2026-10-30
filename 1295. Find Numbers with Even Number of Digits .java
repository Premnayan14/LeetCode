class Solution {
    public int even(int i){
            int a=0;
            while(i>0){
                a++;
                i/=10;
            }
            if(a%2==0)return 1;
            return 0;
    }
    public int findNumbers(int[] nums) {
        int s=0;
        for(int i=0;i<nums.length;i++){
            // // int a=0;
            // // while(nums[i]>0){
            // //     a++;
            // //     nums[i]/=10;
            // // }
            // if(a%2==0)s++;
            s+=even(nums[i]);
        }
        return s;
    }
}
