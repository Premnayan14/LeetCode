class Solution {
    public int tribonacci(int n) {
        if(n==0){
            return 0;
        }else if(n==2 || n==1){
            return 1;
        }else if(n==3){
            return 2;
        }
        int t0=0; int t1=1; int t2=1;
        while(n-3>0){
            int s=t0+t1+t2;
            t0=t1; t1=t2; t2=s;
            n--;
        }return t0+t1+t2;

        // ArrayList<Integer>ans =new ArrayList<>();
        // if(n==0 || n==1){
        //     return 0;
        // }else if(n==2){
        //     return 1;
        // }else if(n==3){
        //     return 2;
        // }else if(n==4){
        //     return 4;
        // }
        // int ans[]=new int[n];
        // // int t0=0; int t1=1; int t2=1;
        // ans[0]=0; ans[1]=1; ans[2]=1;
        // for(int i=3;i<n;i++){
        //     ans[i]=ans[i-1]+ans[i-2];
        // }
        // return ans[n-1]+ans[n-2]+ans[n-3];
        // return t0+t1+t2;
        // int t0=0; int t1=1; int t2=1; 
        // if(n==0 || n==1){
        //     return 0;
        // }else if(n==2){
        //     return 1;
        // }else if(n==3){
        //     return t0+t1+t2;
        // }
        // int i=1;
        // while(i<n-2){
        //     t0=t1;
        //     t1=t2;
        //     t2=t2+t1;
        //     i++;
        // }
        // return t0+t1+t2;
    }
}