class Solution {
    public List<Integer> findMissingElements(int[] nums) {
        // sort.nums(start,end);
        List<Integer>ans=new ArrayList<>();
        for(int i=0; i<nums.length;i++){
            for(int j=1+i;j<nums.length;j++){
                if(nums[i]>nums[j]){
                    int t=nums[i];
                    nums[i]=nums[j];
                    nums[j]=t;
                }
            }
        }
        int min=nums[0]; int max=nums[nums.length-1];
        // for(int i=min,j=0; i<=max; i++){}
        int i=0; int expec=min;
        while(expec<=max){
            if(nums[i]==expec){
                i++;
            }else{
                ans.add(expec);
            }
            expec++;
        }
        return ans;
    }
}