class Solution {
    public String defangIPaddr(String address) {
        String s="[.]";
        StringBuilder ans= new StringBuilder();
        for(int i=0; i<address.length(); i++){
            if(address.charAt(i)=='.'){
                ans.append(s);
            }else{
                ans.append(address.charAt(i));
            }
        }
        return ans.toString();
        // another way
        // return address.replace(".", "[.]");
    }
}