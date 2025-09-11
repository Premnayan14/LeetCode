class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    //     int maxVal = *max_element(nums.begin(), nums.end());
    // vector<int> ans(maxVal + 1, 0);
    //     // vector<int> ans;
    //     for(int num:nums){
    //         ans[num]++;
    //     }
    //     vector<int> out;
    //     for(int i=0;i<ans.size();i++){
    //         if(ans[i]==2){
    //             out.push_back(i);
    //         }
    //     }return out;

             //optimized way 
       vector<int>result;
       for(int i=0;i<nums.size();i++){
        int index=abs(nums[i])-1; // map number to index (1-based → 0-based)
        if(nums[index]<0){
            result.push_back(abs(nums[i])); // already visited → duplicate
        }
        else{
    // Mark as visited by flipping the sign
            nums[index]=-nums[index]; 
         }
       }
       return result;
    }
};