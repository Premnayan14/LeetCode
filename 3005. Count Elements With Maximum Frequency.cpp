class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        if(nums.empty())return 0;
        vector<int>freq(101,0);
        for(int num:nums){
            freq[num]++;
        }
        int max=0, ans=0;
        for(int i=1;i<freq.size();i++){
            if(freq[i]>max){
                max=freq[i];
                ans=max;
            }
            else if(freq[i]==max){
                ans+=freq[i];
            }
        }return ans;
    }
};