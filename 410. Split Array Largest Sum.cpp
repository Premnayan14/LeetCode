class Solution {
public:
    bool ispossible(vector<int>& nums, int k,int mid) {
        int c=1; int sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }
            else{
                c++;
                if(c>k||nums[i]>mid){
                    return false;
                }
                sum=nums[i];
            }  
        } return true;

    }
    int splitArray(vector<int>& nums, int k) {
       int s=0; int sum=0;
       for(int i=0;i<nums.size();i++){
        sum+=nums[i];
       } 
       int e=sum; int ans=-1; int mid=s+(e-s)/2;
       while(s<=e){
        if(ispossible(nums,k,mid)){
            ans=mid; e=mid-1;
        }
        else{s=mid+1;}
        mid=s+(e-s)/2;
       } return ans;
    }
};