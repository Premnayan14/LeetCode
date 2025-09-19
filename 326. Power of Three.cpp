class Solution {
public:
    bool isPowerOfThree(int n) {
        
        // if(n<=0)return 0;
        // while(n%3==0){
        //     n/=3;
        // }
        // return n==1;

        // return n > 0 && 1162261467 % n == 0;
        
        if(n==1)return true;
        if(n<3) return false;
        if(!(n&1))return false; 
        while(n!=3){
            if(n%3==0){
                n/=3;
            }else{
                return false;
            }    
        }return true; 
    
    }
};