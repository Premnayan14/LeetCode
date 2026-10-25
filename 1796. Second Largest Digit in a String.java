class Solution {
    public int secondHighest(String s) {
        int arr[] = new int[10];
        for(int i=0;i<s.length();i++){
            // arr[i]=i;
            char c=s.charAt(i);
            if(Character.isDigit(c)){
                arr[c-'0']=1;
            }
        }
        
        for(int i=9;i>=0;i--){
            if(arr[i]==1){
                arr[i]=0;
                break;
            }
        }
        // int t=0;
        // m=0;
        for(int i=9;i>=0;i--){
            if(arr[i]==1)return i;
        }
        return -1;
    }
}