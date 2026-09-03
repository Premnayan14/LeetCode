class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        int n=nums.length;
        List<Integer> res=new ArrayList<>(); 
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] > nums[j]){
                    int t=nums[i];
                    nums[i]=nums[j];
                    nums[j]=t;
                }
            }
        }
        // int j=0;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                res.add(i);
                // j++;
            }
        }
        return res;
    }
}
