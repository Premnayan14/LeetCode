class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        /*
        int left = 0, zero_count = 0, max_len = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == 0) zero_count++;
            while (zero_count > 1) {
                if (nums[left] == 0) zero_count--;
                left++;
            }
            max_len = max(max_len, right - left); // delete one element
        }
        return max_len;*/
        vector<int> ans;int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                c++;
            }
            else{
                ans.push_back(c);
                ans.push_back(0);
                c=0;
            }
        }
        ans.push_back(c); //push last segment if not zero
        int m=0;
        for(int i=0;i<ans.size();i++){
            int p=0,n=0;
            if(ans[i]==0 && i>0 && i<ans.size()-1){
                p=ans[i-1];
                n=ans[i+1];
                m=max(m,p+n);
            }
        }
        if(m==0){
            return (ans[0] > 0) ? ans[0] - 1 : 0;
        }
        return m;
    }
};