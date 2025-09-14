class Solution {
public:
    bool isPalindrome(string s) {
     string cl="";
     for(char ch:s){
        if(ch>='0' && ch<='9'){
            cl+=ch;
        }
        else if(ch>='a' && ch<='z'){
            cl+=ch;
        }
        else if(ch>='A' && ch<='Z'){
            cl+=ch+'a'-'A';
        }
     } 
    //  cout<<cl<<endl;
     int st=0,e=cl.size()-1;
     while(st<e){
        if(cl[st++]!=cl[e--]){
            return 0;
        }
     }  return 1; 
    } 
};