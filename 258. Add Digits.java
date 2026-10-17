class Solution {
    public int add(int s){
        // int d=s;
        int a=0;
        while(s>0){
            a+=s%10;
            s/=10;
        }
        return a;
    }
    public int addDigits(int num) {
        if(num==0)return 0;
        // int s=num;
        int s=add(num);
        while(s>=10){
            s=add(s);
        }
        return s;
    }
}