class Solution {
public:
    int fib(int n) {
          //  recursion based
       if(n==0) return 0;
        if(n==1) return 1;
        int ans=fib(n-1)+fib(n-2);
        return ans;

            //recursion based 
        // if (n==0)return 0;
        // if (n==1) return 1;
        // int f=0, s=1; int ans=0;
        // for(int i=2;i<=n;i++){
        //     ans=f+s;
        //     f=s;
        //     s=ans;
        // } 
        // return ans;

    }
};