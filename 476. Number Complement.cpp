class Solution {
public:
    int findComplement(int num) {
        int k=0,s=num;
        while(s!=0){
            k++;
            s=s>>1;
        }return(pow(2,k)-1)-num;
    }
};