class Solution {
public:
    int dfs(vector<int>& nums, int index, int currentXor) {
        if (index == nums.size()) return currentXor;
        // Option 1: Include nums[index]
        int include = dfs(nums, index + 1, currentXor ^ nums[index]);
        // Option 2: Exclude nums[index]
        int exclude = dfs(nums, index + 1, currentXor);
        return include + exclude;
    }
    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        for (int x : nums) sum |= x;
        // Careful: For XOR, it’s OR first then multiply by 2^(n-1)
        return sum * (1 << (nums.size() - 1));
        /*int n = nums.size();
        int total = 0;
        int subsets = 1 << n; // 2^n
        for (int mask = 0; mask < subsets; mask++) {
            int xorSum = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) xorSum ^= nums[i];
            }
            total += xorSum;
        }
        return total;*/
         
        /*return dfs(nums, 0, 0);*/

    }
};