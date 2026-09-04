class Solution {
    public String convert(String s, int numRows) {
        int n=numRows; 
        // String a; int c=0;
        if(n==1){
            return s;
        }
        StringBuilder ans=new StringBuilder();
        int cy=2*n-2;
        for(int r=0; r<n; r++){
            int i=r;
            int c=1;
            while(i<s.length()){
                ans.append(s.charAt(i));
                if(r==0 || r==n-1){
                    i+=cy;
                }else{
                    int fj=cy-2*r;
                    int sj=2*r;
                    if(c==1){
                        i+=fj;
                        c=0;
                    }else{
                        i+=sj;
                        c=1;
                    }
                }
            }
        }
        return ans.toString();
        // if(n==2){
        //     for(int i=0; i<s.length;i+=2){
        //         a[c]=s[i]; c++;
        //     }
        //     for(int i=1; i<s.length; i+=2){
        //         a[c]=s[i]; c++;
        //     }
        // }
        // int arr[][]=new int[n][];
        // for(int i=0; i<)
        // while(j<s.length){
            
        // }
    }
}