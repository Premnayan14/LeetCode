class Solution {
public:
    string processStr(string s) {
    //    string ans="";
    //     for(char ch:s){
    //         if(ch>='a' && ch<='z'){
    //             ans+=ch;
    //         }
    //         else if(ch=='*'){
    //             if(!ans.empty()){ 
    //             ans.pop_back();}
    //         }
    //         else if(ch=='#'){
    //             ans+=ans;
    //         }
    //         else if(ch=='%'){
    //             // for( char cl:ans){
    //             //     swap(cl++,ans--);
    //             // }
    //             reverse(ans.begin(),ans.end());
    //         }
    //     }
    //     return ans;
    // class Solution {

        int n=s.size();
        string ans;
        for(int i=0;i<n;i++){
            int ch=s[i];
            if(ch>='a'&&ch<='z'){
                ans.push_back(ch);
            }
            else if(ch=='#'){
                ans=ans+ans;
            }
            else if(ch=='*'&&ans.size()>0){
                ans.pop_back();
            }
            else if(ch=='%'){
                reverse(ans.begin(),ans.end());
            }
            
        }
        return ans;
        
    }
};