class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        for(int j=0;j<n;j++){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
        }
                //  brute force;
        // vector <int>ans; int c=0;int i=0;
        // while(i<n){
        //     if(nums[i]!=0){
        //         ans.push_back(nums[i]);
        //     }else{
        //         c++;
        //     }
        //     i++;
        // }
        // while(c!=0){
        //     ans.push_back(0);
        //     c--;
        // }
        // nums=ans;
    }
};
