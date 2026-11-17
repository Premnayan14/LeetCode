class Solution {
    public boolean areOccurrencesEqual(String s) {
        char arr[]=new char[26];
        int a=0;
        for(int i=0;i<s.length();i++){
            // if(s.charAt())
            arr[s.charAt(i)-'a']++;
            a=s.charAt(i)-'a';
        }
        if(arr[a]==s.length())return true;
        for(int n:arr){
            if(!(n==0 || arr[a]==n))return false;
        }
        return true;
    }
}