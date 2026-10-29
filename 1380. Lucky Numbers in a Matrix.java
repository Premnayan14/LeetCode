class Solution {
    public List<Integer> luckyNumbers(int[][] matrix) {

        int n=matrix.length;
        int m=matrix[0].length;
        int r[]=new int[n];
        int c[]=new int[m];

        for(int i=0;i<n;i++){
            // if() 
            int mi=Integer.MAX_VALUE;
            for(int j=0;j<m;j++){
                // if(matrix[i][j]<mi)mi=matrix[i][j];
                mi=Math.min(matrix[i][j],mi);
            }
            r[i]=mi;
        }

        for(int j=0;j<m;j++){
            // if() 
            int ma=Integer.MIN_VALUE;
            for(int i=0;i<n;i++){
                ma=Math.max(matrix[i][j],ma);               
                // if(matrix[i][j]>ma)ma=matrix[i][j];
            }
            c[j]=ma;
        }
        
        List <Integer> ans= new ArrayList<>();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==r[i] && matrix[i][j]==c[j]){
                    ans.add(r[i]);
                    break;
                }
            }
        }
        return ans;

        // for(int i=0;i<matrix.length;i++){
        //     for(int j=i+1;j<matrix.length-1;j++){ 
        //         if(r[i]==c[i]){
        //             ans=r[i];
        //             break;
        //         }
        //     }
        // }
    }
}