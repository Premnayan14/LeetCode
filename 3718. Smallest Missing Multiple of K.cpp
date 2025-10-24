class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int f=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==k){
                f=1;
                break;
            }
        }
        if(!f){return k;}
        // int s=2;
        for(int i=1;;i++){
            f=0;
            for(int j=0;j<n;j++){
                if(nums[j]==k*i){
                    f=1;
                    break;
                }
            }
            if(!f){
                return k*i;
            }
        }
        return k*n;
    }
};