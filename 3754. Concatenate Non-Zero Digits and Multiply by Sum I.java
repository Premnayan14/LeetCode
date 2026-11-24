class Solution {
    public long sumAndMultiply(int n) {
        long ans=0;
        long sum = 0;
        long place = 1;

        while(n > 0) {
            if(n % 10 != 0) {
                ans += (n % 10) * place;
                sum += n % 10;
                place *= 10;
            }
            n /= 10;
        }

        return ans * sum;
    }
}