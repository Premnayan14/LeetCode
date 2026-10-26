class Solution {
    public boolean checkIfPangram(String sentence) {
        if(sentence.length()<=25)return false;
        int arr[]=new int[26];
        for(int i=0; i<sentence.length(); i++){
            char c=sentence.charAt(i);
            arr[c-'a']++;
        }
        for(int i=0; i<26; i++){
            if(arr[i]<1)return false;
        }
        return true;
    }
}