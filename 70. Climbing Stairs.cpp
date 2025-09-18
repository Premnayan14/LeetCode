class Solution {
public:
    int climbStairs(int n) {
        if (n<2){
            return 1;
        } 
        int a=1, b=1, s=0;
        for (int i=2;i<=n;i++){
            s=a+b;
            a=b; b=s;
        }return s;
    }
};