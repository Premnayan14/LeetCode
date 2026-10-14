class Solution {
    public String reverseOnlyLetters(String s) {
        char[] arr=s.toCharArray();
        int i=0;
        int j=arr.length-1;
        while(i<j){
            if(!Character.isLetter(arr[i])){
                i++;
            }else if(!Character.isLetter(arr[j])){
                j--;
            }else{
                char temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                i++; j--;
            }
        }
        return new String(arr);
        // int s=0; int e=0;
        // int arr[s.length()]=new int[];
        // int arr j=0;
        // for(int i=0;i<s.length();i++){
        //     if(s.CharacterAt(i).isAlpha()){
        //         arr[j]=i; j++;
        //     }else
        // }
        // String_Builder a;
        // for(int i=0;i<s.length()/2;i++){
        //     for(int j=s.length();j>s.length()/2;j++){

        //     }
        // }

        // String_Builder a;
        // while(e>s){
        // for(int i=0,j=s.length();i<j;i++,j--)
        // }
    }
}