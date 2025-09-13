class Solution {
public:
    int maxFreqSum(string s) {
        int vowe[27]={0}, cons[27]={0};
        for(int i=0;i<s.length();i++){
          if(s[i]-97==0||s[i]-97==4||s[i]-97==8||s[i]-97==14||s[i]-97== 20){
            vowe[s[i]-97]++;   
            }
            else{
                cons[s[i]-97]++;
            }
        }
        sort(vowe,vowe+27);
        sort(cons,cons+27);
        return vowe[26]+cons[26];
    }
};