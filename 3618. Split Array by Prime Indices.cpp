class Solution {
private:
       int isprime(int i){
        if(i<2) return false;
        if(i==2) return true;
        if(!(i & 1))return false;
        for(int j=3;j*j<=i;j+=2){
            if (i%j==0){
                return false;
            }
        } return true;
     }
public:
    long long splitArray(vector<int>& nums) {
    //    vector<int>a; vector<int>b;
       long long int as=0,bs=0;
       for(int i=0;i<nums.size();i++){
        if (isprime(i)){
            as+=nums[i];
        }
        else{
             bs+=nums[i];
        }
       } return abs(as-bs);
    }
};