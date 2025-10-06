class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans=high;
        while(low<=high){
            int mid = low +(high-low)/2;
            long time=0;
            for(int pile:piles){
                time +=(pile + mid -1)/mid;
            }
            if( time <= h){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};