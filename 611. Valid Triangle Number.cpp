class Solution {
public:
    int triangleNumber(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;

        for (int i = n - 1; i >= 2; i--) {
            int left = 0, right = i - 1;
            while (left < right) {
                if (nums[left] + nums[right] > nums[i]) {
                    count += right - left;
                    right--;
                } else {
                    left++;
                }
            }
        }
        return count;

        // int n=nums.size();
        // sort(nums.begin(),nums.end());
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int sm=nums[i]+nums[j];
        //         int tmp=lower_bound(nums.begin()+j,nums.end(),sm)-nums.begin();
        //         ans+=max(0,(tmp-j-1));
        //     }
        // }
        // return ans;

    }
};