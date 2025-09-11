class Solution {
public:
    bool isPalindrome(int x) {
            //1st way 
     if(x<0)return 0;
     string a=to_string(x);
     string b=a;
     reverse(b.begin(),b.end());
     return a==b;

            //2nd ; optimized than 1st way
    /* if (x<0) {return false;}
        if(x==0){return true;}
        long long r=0;int t=x;
       while(x>0){
           r=r*10+x%10;
           x=x/10;
       } 
        return r==t; */
     
    }
};