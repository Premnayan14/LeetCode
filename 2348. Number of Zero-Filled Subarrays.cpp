class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long result=0; long long c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c++;
                result+=c;
            }else{
                c=0;
            }
        }return result;
        // for(int num:nums){
        //     if(num==0){
        //         c++;
        //         result+=c;
        //     }
        //     else{
        //         c=0;
        //     }
        // }return result;
    


    }
};
