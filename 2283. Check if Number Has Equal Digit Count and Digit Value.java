class Solution {
    public boolean digitCount(String num) {
        // int s=0;
        // for(int i=0;i<num.length();i++){
        //     s*=10;
        //     s+=num.charAt(i);
        // }
        for(int i=0;i<num.length();i++){
            int c=0;
            for(int j=0;j<num.length();j++){
                if((num.charAt(j)-'0')==i)c++;
            }
            if(!((num.charAt(i)-'0')==c))return false;
        }
        return true;
    }
}