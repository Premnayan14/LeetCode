class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n=nums.size(), inc=1, previnc=0, maxlen=0;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1])inc++;
            else{
                previnc=inc;
                inc=1;
            }
            maxlen= max(maxlen,max(inc>>1,min(previnc,inc)));
            if(maxlen>=k)return true;
        }
        return false;
    }
};
