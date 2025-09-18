class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(), m=nums2.size();
         // checking if either of array is empty;
        if(n==0){
            if(m%2!=0){
            return nums2[m/2];
        }
        else{
            double s=nums2[m/2]+nums2[(m/2)-1];
            return s/2.0;
           }
        }
         if(m==0){
            if(n%2!=0){
            return nums1[n/2];
        }
        else{
            double s=nums1[n/2]+nums1[(n/2)-1];
            return s/2.0;
        }
        }
        vector <int> ans(m+n);
        int i=0,j=0,k=0;
        //merging two arrays (same as leetcode 88)
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                ans[k++]=nums1[i++];
            }
            else{
                ans[k++]=nums2[j++];
            }
        }
        while(i<n){
            ans[k++]=nums1[i++];
        }
        while(j<m){
            ans[k++]=nums2[j++];
        }
        int a=ans.size();
        if(a%2!=0){
            return ans[a/2];
        }
        else{
            double s=ans[a/2]+ans[(a/2)-1];
            return s/2.0;
        }
    }
};
