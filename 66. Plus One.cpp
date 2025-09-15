class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n = digits.size();
        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;    // just add 1 and return
                return digits;
            }
            digits[i] = 0;      // make it 0 and continue
        }
        
        // If we reach here, it means all digits were 9
        digits.insert(digits.begin(), 1);
        return digits;

        // int co=0, n=digits.size();
        // for(int i=n-1;i>=0;i--){
        //     if(digits[i]==9){
        //         co++;
        //     }
        //     else{ break;}
        // }
        // if(co==n){
        //     digits.push_back(1);
        //     reverse(digits.begin(),digits.end());
        //     while(co>0){
        //         digits[co]=0;
        //         co--;
        //     }return digits;
        // }

        // int c=digits[n-1];
        // if(c!=9){
        //     digits.pop_back();
        //     digits.push_back(c+1);
        //     return digits;
        // }
        // else{
        //     for(int i=n-1;i>=0;i--){
        //         if(digits[i]==9){
        //             digits[i]=0;co--;
        //         }else{
        //             digits[i]+=1;
        //             if(co==0) break;
        //         }
        //     }return digits;
    }  
};