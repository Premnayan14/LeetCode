class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1=0,num2=0,i=1;
        while(i<=n){
            if(i%m!=0){
                num1+=i;
            }else{
                num2+=i;
            }
            i++;
        }return num1-num2;
    }
};