class Solution {
public:
    vector<int> sumZero(int n) {
        // vector <int>ans;
        // if(n==1){
        //     ans.push_back(0);
        //     return ans;}
        // if(n%2==0){
        //     for(int i=0;i<n/2;i++){
        //         ans.push_back(i+1);
        //     }
        //     for(int j=0;j<n/2;j++){
        //         ans.push_back(-(j+1));
        //     }
        // }else{
        //     for(int i=0;i<=n/2;i++){
        //         ans.push_back(i);
        //     }
        //     for(int j=1;j<=n/2;j++){
        //         ans.push_back(-j);
        //     }
        // }
        // return ans;
        vector<int> ans;
        for (int i = 1; i <= n / 2; i++) {
            ans.push_back(i);
            ans.push_back(-i);
        }
        if (n % 2 != 0) ans.push_back(0);
        return ans;
    }
};