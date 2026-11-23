class Solution {
    public boolean checkString(String s) {
        boolean aDone = false;
        for(char ch : s.toCharArray()) {
            if(ch == 'b') {
                aDone = true;
            }
            if(aDone && ch == 'a') {
                return false;
            }
        }

        return true;
    }
}