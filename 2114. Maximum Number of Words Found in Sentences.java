class Solution {
    public int mostWordsFound(String[] sentences) {
        int w=0; int mw=-1;
        for(int i=0; i<sentences.length; i++){
            w = sentences[i].split(" ").length;
            if(w>mw){
                mw=w;
            }
        }
        return mw;
    }
}