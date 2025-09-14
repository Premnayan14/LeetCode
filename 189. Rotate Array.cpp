class Solution {
public:
    void rotate(vector<int>& nums, int k) {
            // 1st way
       int n=nums.size();
       vector<int>temp(n);
       for(int i=0;i<n;i++){
        temp[(i+k)%n]=nums[i];
       }
       nums=temp;
       
        //   2nd way
       vector<int>ans; 
       int i=n-(k%n);
       for(;i<n;i++){
        ans.push_back(nums[i]);
       }
       for(int i=0;i<n-(k%n);i++){
        ans.push_back(nums[i]);
       }
       nums=ans;
    }
};