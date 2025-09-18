class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        //  1st way
        //  sorting array;
        for(int i=0;i<n;i++){
            while(nums[i] >= 1 && nums[i] <=n && nums[nums[i]-1]!=nums[i]){
                swap(nums[i],nums[nums[i]-1]);
            } 
        } 

        // finding which array element != i+1
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                return i+1;
            }
        }return n+1;
       
        //  2nd way
        // sorting array;
        sort(nums.begin(),nums.end());
        int min=1;

        // finding which array element != i+1
        for(int i=0;i<n;i++){
            if(nums[i]<min){
                continue;
            }
            if(nums[i]==min){
                min++;
            }else if(nums[i]>min){
                return min;
            }
        }return min;
        
        // for(int i=0;i<n;i++){
        //     if(nums[i]!=i+1){
        //         return i+1;
        //     }
        // }return n+1;
    }
};