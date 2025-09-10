class Solution {
public:
    int bitwiseComplement(int n) {
       /*int m=n; int c=0;
       if(n==0){
        return 1;
       } 
       while(m!=0){
        c=(c<<1)|1;
        m=m>>1;
       }
       int a=(~n)&c;
       return a;*/

        if (n == 0) return 1; // edge case
        int mask = 0;
        int temp = n;
        while (temp > 0) {
            mask = (mask << 1) | 1; // build mask like 111...
            temp >>= 1;
        }
        return mask ^ n;
    }
};