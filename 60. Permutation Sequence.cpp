class Solution {
public:
    string getPermutation(int n, int k) {
        // Step 1: Initialize factorial of (n-1) and the list of numbers
        int fact = 1;
        string nums="";
        for(int i=1;i<n;i++){
            fact = fact * i;  // Compute (n-1)!
            nums.push_back('0'+i);// Compute (n-1)!
        }
        nums.push_back('0'+n);    // Add the last number n to nums
        string ans = "";
        k = k-1;              // Step 2: Convert k to 0-based index
    // Step 3: Build the permutation one digit at a time
        while(!nums.empty()){
    // Step 3a: Determine which number to pick using index = k / fact
            ans += nums[k/fact];
    // Step 3b: Remove the chosen number from nums so it won't be reused
            nums.erase(nums.begin()+(k/fact));
    // Step 3c: If no numbers left, we are done
            if(nums.size() == 0)break;
    // Step 3d: Update k to find position within the smaler group        
            k = k % fact;
    // Step 3e: Update fact for the remaining numbers
            fact = fact / nums.size(); // equivalent to (remaining-1)!
        }
    // Step 4: Return the k-th permutation
        return ans;

                //  brute force
        // string nums="";
        // for(int i=0;i<n;i++)nums.push_back(i+1);

        // string s="";
        // for( int x : nums ) s+=to_string(x);

        // for(int i=0;i<k-1;i++){
        //     next_permutation(s.begin(),s.end());
        // }return s;
    }
};