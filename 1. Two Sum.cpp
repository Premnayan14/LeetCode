class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       unordered_map<int, int> map;  // stores number and its index

        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int needed = target - num;
            if (map.count(needed)) {
                return {map[needed], i};  
            }
            map[num] = i; 
        }
        return {};

                //   brute force
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             return{i,j};
        //         }
        //     }
        // }return {};
    }
};