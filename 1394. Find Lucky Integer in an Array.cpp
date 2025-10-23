class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        int ans[501]={0};int n=-1;

        for(int i=0;i<arr.size();i++){
            ans[arr[i]]++;
        }
        for(int i=1;i<=500;i++){
            if(ans[i]==i){
                n=max(n,i);
            }
        }
        return n;
    }
};