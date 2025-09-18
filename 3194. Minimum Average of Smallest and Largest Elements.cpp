class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<float> averages;
        sort(nums.begin(),nums.end());
        double min=DBL_MAX;
        for(int i=0;i<nums.size()/2;i++){
            double avg=((nums[i]+nums[nums.size()-1-i])/2.0);
            if(avg<min){
                min=avg;
            }
        }
        return min;
    }
};