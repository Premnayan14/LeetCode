class Solution {
public:
    int reverse(int x) {
        long d=0;
        // x=abs(x);
        while(x!=0){
            int r=x%10;
            d=d*10+r;
            if(d > INT_MAX || d< INT_MIN){
                return 0;
            }x/=10;
        }
       return d;
    }
};