class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int r=grid.size(), col=grid[0].size(), c=0;
        for(int i=0;i<r;i++){
            for(int j=col-1;j>=0;j--){
                if(grid[i][j]<0){
                    c++;
                }
                else{
                    break;
                }
            }
        } return c;
    }
};