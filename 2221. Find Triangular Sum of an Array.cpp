class Solution {
public:
    int triangularSum(vector<int>& nums) {

        // More optimized way
        int n=nums.size();
        while(n > 1){
           for(int i=0;i<n-1;i++){
            nums[i]=(nums[i]+nums[i+1])%10;
           }n--;
        }return nums[0];
        
        // less optimized way
        // int n=nums.size();
        // vector<int> newnums(n-1);
        // while(n!=1){
        //     for(int i=0;i<n-1;i++){
        //         newnums[i]=(nums[i]+nums[i+1]) % 10;
        //     }
        //     nums=newnums; n--;
        // }return nums[0];

    }
};