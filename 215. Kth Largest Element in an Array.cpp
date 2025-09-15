class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
                    // working
    sort(nums.begin(),nums.end());
    return nums[nums.size()-k];


              // time limit exceeded   
        // for(int i=0;i<k-1;i++){
        //     for(int j=0;j<nums.size()-1;j++){
        //         if(nums[j]>nums[j+1]){
        //         swap(nums[j],nums[j+1]);
        //         }
        //     } nums.pop_back();
        // }return nums.back();
    }
};
