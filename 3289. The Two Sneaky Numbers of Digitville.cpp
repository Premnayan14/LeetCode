class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int freq[101]={0};
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<=100;i++){
            if(freq[i]==2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};