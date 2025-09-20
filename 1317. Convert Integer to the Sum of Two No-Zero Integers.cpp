class Solution {
private:
    bool valid(int x){
        while(x>0){
            if(x%10==0)return false;
            x/=10;
        }return true;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int a=1;a<n;a++){
            int b=n-a;
            if(valid(a) && valid(b)){
                return{a,b};
            }
        }return{};
        
        // vector<int>ans;
        // if( (n-1) %10 != 0){
        // ans.push_back(1);
        // ans.push_back(n-1);
        // }else{
        //     ans.push_back(2);
        //     ans.push_back(n-2);
        // }
        // return ans;

    }
};