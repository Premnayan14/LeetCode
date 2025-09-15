class Solution {
public:
    int countPrimes(int n) {
        if(n<3) return 0;  // No primes < 2

        int c=1;  // Count '2' (the only even prime)
        vector <bool> prime(n, true);  // index 0..n-1, ignore n
        
        // Start from 3, check only odd numbers
        for(int i=3;i*i<n;i+=2){
            if(prime[i]){
                for(int j=i*i;j<n;j+=2*i){
                    prime[j]=false; // mark odd multiples as not prime
                }
            }
        } 
        // Count primes (only odd ones)
        for (int i = 3; i < n; i += 2) {
            if (prime[i]) c++;
        }
      return c;
    }
};