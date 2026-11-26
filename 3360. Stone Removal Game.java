class Solution {
    public boolean canAliceWin(int n) {
        if(n<10)return false;
        int i=10;
        while(n>0){
            n-=i;
            --i;
            if(n-i<0)break;
        }
        if(i%2!=0)return true;
        else return false;
    }
}