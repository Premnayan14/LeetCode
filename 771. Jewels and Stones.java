class Solution {
    public int numJewelsInStones(String jewels, String stones) {
        int s=0; 
        for(int i=0; i<stones.length();i++){
            char c=stones.charAt(i);
            for(int j=0;j< jewels.length(); j++){
                if(c==jewels.charAt(j))s++;
            }
        }
        return s;
    }
}