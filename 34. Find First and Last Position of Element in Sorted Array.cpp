class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans;
     int s=0,e=nums.size()-1,c=-1,d=-1;
     while(s<=e){
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            c=mid;
            break;
        }
        else if(nums[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    if(c==-1){
        ans.push_back(-1); ans.push_back(-1);
        return ans;
    }
    for(int i=c;i>=0;i--){
        if(nums[i]==target){
            c=i;
        }else{
            break;
        }
    }
    for(int i=c;i<nums.size();i++){
        if(nums[i]==target){
            d=i;
        }else{
            break;
        }
    }
    // ans[0]=c,ans[1]=d;
    ans.push_back(c); ans.push_back(d);
    return ans;

    }
};