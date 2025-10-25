class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
       vector<int> ans;
       ans=nums;
       sort(ans.begin(),ans.end());
       for(int i=0;i<nums.size();i++){
       if(ans[i]==ans[i+1]){
            return ans[i];
           }
        }
       return 0;

    }
};