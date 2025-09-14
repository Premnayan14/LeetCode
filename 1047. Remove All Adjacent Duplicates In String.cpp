class Solution {
public:
    string removeDuplicates(string s) {
                //    1st way
        // string t=""; t.push_back(s[0]); int j=0;
        // for(int i=1;i<s.length();i++){
        //     t.push_back(s[i]);
        //     j=t.length()-1;
        //     if(j>0 && t[j]==t[j-1]){
        //         t.pop_back();t.pop_back();
        //     }
        // } return t;

             // 2nd way   
        int n=s.length()-1;
        while(n>0){
            if(s[n]==s[n-1]){
                s.erase(n-1,2);
                n=s.length()-1;
            }
            else{
                n--;
            }
        }return s;
    }
};