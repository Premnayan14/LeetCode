class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        int cnt = 0, pre = INT_MIN;
        for (int num: nums) {
            if (num - k > pre) {
                pre = num - k;
            } else if (num + k > pre) {
                pre++;
            } else {
                continue;
            }
            cnt++;
        }
        return cnt;

        // sort(nums.begin(), nums.end());
        // int ans = 0;
        // long long c = LLONG_MIN;

        // for (auto i : nums) {
        //     long long l = i - k, r = i + k;
        //     if (c < l) {
        //         c = l;
        //     }
        //     if (c <= r) {
        //         ans++;
        //         c++;
        //     }
        // }
        // return ans;
    }
};