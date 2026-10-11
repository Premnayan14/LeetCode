class Solution {
    public int sumOfMultiples(int n) {
        int s=0;
        int i=1;
        while(i<=n){
            if(i%3==0)s+=i;
            else if(i%5==0)s+=i;
            else if(i%7==0)s+=i;
            i++;
        }
        return s;
    }
}