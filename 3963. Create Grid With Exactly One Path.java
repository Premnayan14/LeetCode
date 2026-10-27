class Solution {
    public String[] createGrid(int m, int n) {
        String grid []= new String[m];
        Arrays.fill(grid,"#".repeat(n-1)+".");
        grid[0]=".".repeat(n);
        return grid; 
        // Arrays.deepToString()
        // StringBuilder s=;

        // for(int i=0; i<m ; i++){
        //     s.append("")
        // }
    }
}