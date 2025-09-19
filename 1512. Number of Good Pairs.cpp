class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c = 0;
        unordered_map<int, int> freq;
        for (int x : nums) {
            c += freq[x];
            freq[x]++;
        }
        return c;

    //   int c=0;
    //   for(int i=0;i<nums.size();i++){
    //     for(int j=i+1;j<nums.size();j++){
    //         if(nums[i]==nums[j] && i<j){
    //             c++;
    //         }
    //     }
    //   }return c;
    }
};
