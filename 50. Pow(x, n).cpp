class Solution {
public:
    double myPow(double x, int n) {
        // return pow(x,n);

        if(n==0)return 1;
        long long exp=n;
        if(exp < 0){
            x=1/x;
            exp*=(-1);
        }
        double ans=1;
        while(exp>0){
            if(exp % 2==1)
            ans*=x;
            x*=x;
            exp/=2;
        }
        return ans;

    }
};