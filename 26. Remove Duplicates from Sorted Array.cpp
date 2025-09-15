class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())return 0;
        int n=nums.size();int c=0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[c]){
                c++;
                nums[c]=nums[i];
            }
        }return c+1;
    }
};