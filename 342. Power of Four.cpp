class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<1) return false;
        if(n==1) return true;
        if(n<4) return false;
        int a=n;
        while(a>4){
            if(a%4!=0) return false;
            a/=4;
        }return a==4;
           if(n <= 0) return false;
        /*double x = log10(n) / log10(4);
        return x == floor(x);
        if (n <= 0) return false;

        int count = 0;  // position tracker
        int ones = 0;   // count of set bits

        while (n > 0) {
            if (n & 1) {       // if bit is set
                ones++;
                if (ones > 1) return false; // more than one set bit → false
                if (count % 2 != 0) return false; // position is odd → false
            }
            count++;
            n >>= 1;  // shift right
        }

        return ones == 1;  // exactly one bit was set and at even position
 return n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555);*/
    }
};