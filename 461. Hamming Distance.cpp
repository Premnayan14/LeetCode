class Solution {
public:
    int hammingDistance(int x, int y) {
        long eor=x^y;
        int c=0;
        while(eor!=0){
            c=c+(eor & 1);
            eor=eor>>1;
        }return c;

        // return __builtin_popcount(x^y);
    }
};