class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3)return false;
        int num=0, vowel=0, con=0;
        for(int i=0;i<word.size();i++){
            char s=word[i];
            if(s >= 48 && s <= 57){
                num++;
            }
            else if(s =='A'|| s =='a'|| s =='E'|| s =='e'|| s =='I'|| s =='i'|| s =='O'|| s =='o'|| s =='U'|| s =='u'){
                vowel++;
            }
            else if(s >= 65 && s<=90 || s>=97 && s<=122){
                con++;
            }
            else{
                return false;
            }
        }
        if( vowel && con)return true;
        return false;
    }
};