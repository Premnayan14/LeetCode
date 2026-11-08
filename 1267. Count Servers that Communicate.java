class Solution {
    // public int edges_check(int [][]grid,int m, int n){

    //         if(m==0){ //first row
    //             if(n==0){ //first row,1 element
    //                 if(grid[m][n]==grid[m][n+1])return 1; //right
    //                 else if(grid[m][n]==grid[m+1][n])return 1; //below
    //             }
    //             else if(n==grid[0].length){ //first row,last element
    //                 if(grid[m][n]==grid[m][n-1])return 1; //left
    //                 else if(grid[m][n]==grid[m+1][n])return 1; //below
    //             }
    //             else {
    //                 if(grid[m][n]==grid[m][n-1])return 1; //left
    //                 else if(grid[m][n]==grid[m][n+1])return 1; //right
    //                 else if(grid[m][n]==grid[m+1][n])return 1; //below 
    //             }
    //         }

    //         else if(m==grid[0].length){ //last row
    //             if(n==0){ //1 element
    //                 if(grid[m][n]==grid[m][n+1])return 1; //right
    //                 else if(grid[m][n]==grid[m-1][n])return 1; //above                   
    //             }
    //             else if(n==grid[0].length){ //last element
    //                 if(grid[m][n]==grid[m][n-1])return 1; //left
    //                 else if(grid[m][n]==grid[m-1][n])return 1; //above
    //             }
    //             else{
    //                 if(grid[m][n]==grid[m][n-1])return 1; //left
    //                 else if(grid[m][n]==grid[m][n+1])return 1; //right
    //                 else if(grid[m][n]==grid[m-1][n])return 1; //above
    //             }
    //         }

    //         else if(n==0){ //1 column 
    //             if(m==0){ //1 element
    //                 if(grid[m][n]==grid[m][n+1])return 1; //right
    //                 else if(grid[m][n]==grid[m+1][n])return 1; //below  
    //             }
    //             else if(m==grid.length){
    //                 if(grid[m][n]==grid[m][n+1])return 1; //right
    //                 else if(grid[m][n]==grid[m-1][n])return 1; //above 
    //             }
    //             else{
    //                 if(grid[m][n]==grid[m][n+1])return 1; //right
    //                 else if(grid[m][n]==grid[m+1][n])return 1; //below
    //                 else if(grid[m][n]==grid[m][n-1])return 1; //left
    //                 else if(grid[m][n]==grid[m-1][n])return 1; //above
    //             }
                
    //         }

    //         else if(n==grid[0].length){ //last column
    //             if(m==0){ //1 element
    //                 if(grid[m][n]==grid[m][n-1])return 1; //left
    //                 else if(grid[m][n]==grid[m+1][n])return 1; //below   
    //             }
    //             else if(m==grid[0].length){
    //                 if(grid[m][n]==grid[m][n-1])return 1; //left
    //                 else if(grid[m][n]==grid[m-1][n])return 1; //above    
    //             }
    //             else{
    //                 if(grid[m][n]==grid[m+1][n])return 1; //below
    //                 else if(grid[m][n]==grid[m][n-1])return 1; //left
    //                 else if(grid[m][n]==grid[m-1][n])return 1; //above
    //             }
    //         }
    //         return 0;       
    //     }


    // public int check(int [][] grid,int m,int n){
    //     if((m==grid.length || m==0)||(n==grid[0].length || n==0)){
    //         int a=edges_check(grid,m,n);
    //         return a;
    //     }
    //     else{
    //         if(grid[m][n]==grid[m][n+1])return 1; //right
    //         else if(grid[m][n]==grid[m+1][n])return 1; //below
    //         else if(grid[m][n]==grid[m][n-1])return 1; //left
    //         else if(grid[m][n]==grid[m-1][n])return 1; //above
    //         // else return 0;
    //     }
    //     return 0;
    // }


    public int countServers(int[][] grid) {
        int ans=0;
        int m=grid.length;
        int n=grid[0].length;
        int r[]=new int[m];
        int c[]=new int[n];
        // int r[]=new int[grid.length];
        // int c[]=new int[grid[0].length];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    r[i]++;
                    c[j]++;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1  &&
                    (r[i] > 1 || c[j] > 1)){
                        ans++;
                    }
            }
        }
        return ans;
    }
}