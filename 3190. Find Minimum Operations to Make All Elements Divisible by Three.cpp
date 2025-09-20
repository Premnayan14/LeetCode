class Solution {
public:
    int minimumOperations(vector<int>& nums) {
      /* int c=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]%3==0){
            c=c;
        }
        else if((nums[i]+1)%3==0){
            c++;
        }
        else if((nums[i]-1)%3==0){
            c++;
        }
       } return c;*/
      /* int c=0;
       for(int num:nums){
        if(num%3!=0)c++;
       }return c;*/
       int c=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]%3!=0)c++;
       }return c;
    }
};