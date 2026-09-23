class Solution {
    static int findpivotindex(int nums[]){
        int s=0; int e=nums.length-1; 
        // int ans=-1;

        // to check if array is fully rotated
        // if(nums[s]<nums[e])return -1;

        while(s<e){
            int mid=s+(e-s)/2;
            if(nums[mid] > nums[e]){s=mid+1;}
            else{
                 e=mid; 
            }
        }return s;
    }
    static int Binarysearch(int nums[],int s,int e,int target){
        // int n=nums.length;
        // int s=0; int e=n-1;
        while(s <= e){
            int mid= s+(e-s)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid] > target){e=mid-1;}
            else {s=mid+1;}
        }
        return -1;
    }
    public int search(int[] nums, int target) {
        int ans=0;
        int n=nums.length;
        if(n == 1)return nums[0] == target ? 0 : -1;
        int pivin=findpivotindex(nums);
        if(pivin==-1){
            ans = Binarysearch(nums,0,n-1,target); return ans;
        }
          // pivot itself
        if(nums[pivin] == target)
            return pivin;
        int ar1s=0; int ar1e=pivin-1;
        int ar2s=pivin+1; int ar2e=n-1;
        // if(target >= nums[ar1s] && target <= nums[ar1e]){
        //     ans = Binarysearch(nums,ar1s,ar1e,target); return ans;
        // }
        if(ar1s <= ar1e && target >= nums[ar1s] && target <= nums[ar1e]){
            ans = Binarysearch(nums, ar1s, ar1e, target);
            return ans;
        }
        if(ar2s<=ar2e && target >= nums[ar2s] && target <= nums[ar2e]){
            ans = Binarysearch(nums,ar2s,ar2e,target); return ans;
        }
        return -1;
        // int n=nums.length;
        // int s=0; int e=n-1;
        // if(n==1 && nums[0]==target){
        //     return 0;
        // }else{
        //     return -1;
        // }
        // // if totally rotated
        // if(nums[0] < nums[n-1]){
        //     while(s <= e){

        //     }
        // }
        
        // while(s<=e){
        //     int mid=s+(e-s)/2;
        //     // go left
        //     if(target <= nums[n-1]){
        //         mid=mid+(e-mid)/2;

        //     }
        // }
        // int p=-1;
        // for(int i=0; i<n; i++){
        //     if(nums[i] < nums[n-1-i]){
        //         p=i;
        //         break;
        //     }
        // }
    }
}
