class Solution {
public:
    int missingNumber(vector<int>& nums) {
            //pure maths
        // int n=nums.size();
        // int ans=n*(n+1)/2,s=0;
        // for(int num:nums){
        //     s+=num;
        // }return ans-s;

          int n=0;int s=nums.size();
        sort(nums.begin(),nums.end()) ;
        while(n<s){
            if(nums[n]!=n){return n;
            } n++;
        } return s;
   
    }
};