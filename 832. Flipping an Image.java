class Solution {
    public int[][] flipAndInvertImage(int[][] image) {
        int n=image.length;
        int m=image[0].length;
        int res[][]=new int[n][m];
        for(int i=0;i<n;i++){
            int l=0;
            for(int j=m-1; j >=0; j--){
                res[i][l]=image[i][j];
                l++;
                // int res[]
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(res[i][j]==0){
                    res[i][j]=1;
                }else{
                    res[i][j]=0;
                }
            }
        }
        return res;
    }
}