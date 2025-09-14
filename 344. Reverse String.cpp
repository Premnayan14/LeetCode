class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
             //1st way
        for(int i=0;i<n/2;i++){
            swap(s[i],s[n-i-1]);
        }

             //2nd way 
        reverse(s.begin(),s.end());
    } 
};