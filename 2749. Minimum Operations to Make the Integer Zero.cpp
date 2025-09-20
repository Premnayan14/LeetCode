class Solution {
private:
    int countbits(long x){
        int c=0;
        while(x>0){
            c+=(int)(x & 1L);
            x >>= 1;
        }
        return c;
    }
public:
    int makeTheIntegerZero(int num1, int num2) {
        if(num1 == 0)return 0;
        for(int k=1;k<=60;k++){
            long s=(long)num1- (long)k* num2 ;
            if(s<0 || s<k) continue;
            int ones=countbits(s);
            if(ones<=k) return k;
        }
        return -1;
    }
};