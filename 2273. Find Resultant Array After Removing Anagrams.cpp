class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        string s="";
        vector<string> ans;
        vector<int>prevfreq (26,0);
        for(string &word: words){
            vector<int>freq(26,0);
            for(char c : word)freq[c-'a']++;
            if(prevfreq != freq){
                ans.push_back(word);
                prevfreq=freq;
            }
        }
        return ans;
    }
};