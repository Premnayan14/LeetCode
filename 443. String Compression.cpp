class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,ans=0,n=chars.size();
        while(i<n){
            int j=i;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            chars[ans++]=chars[i];
            if(j-i>1){
                for(char ch:to_string(j-i)){
                    chars[ans++]=ch;
                }
            } i=j;
        } return ans;
    }
};