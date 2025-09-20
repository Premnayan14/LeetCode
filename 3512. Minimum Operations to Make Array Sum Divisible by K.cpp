class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        if (sum < k)
            return sum;
        else if (sum / k == 0)
            return 0;
        // else if(sum<k)return sum;
        else {
            return sum % k;
        }

        // long long sum = 0;
        // for (int x : nums) sum += x;
        // long long r = sum % k;
        // if (r < 0) r += k;          // robust if negatives were ever present
        // return static_cast<int>(r);

        // return int( (std::accumulate(nums.begin(), nums.end(), 0LL) % k + k)
        // % k );
    }
};