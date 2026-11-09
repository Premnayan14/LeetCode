class Solution {
    public boolean repeatedSubstringPattern(String s) {
        
        int n=s.length();
        // if(n%2!=0)return false;
        for(int a=1; a<=n/2; a++){
            if (n % a != 0) continue;
            boolean flag = true;

            for (int i = a; i < n; i++) {
                if (s.charAt(i) != s.charAt(i % a)) {
                    flag = false;
                    break;
                }
            }

            if (flag) return true;
        }
        return false;

        // if(s.length()%2!=0)return false;
        // int a=s.length()/2;
        // for(int i=1; i<s.length()-1;i++){
        //     if(s.charAt(i)==s.charAt(0) && s.charAt(i+1)==s.charAt(1) )break;
        //     else a++;
        // }
        // int c=0;
        // while(a<1){
        //   for(int i=0; i<a;i++){
        //         if(s.charAt(i)==s.charAt(s+i) && 
        //         s.charAt(i+1)==s.charAt(s+i) ){

        //         }
        //         else a++;
        //     }  
        // }
    }
}