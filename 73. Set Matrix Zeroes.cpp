class Solution {
public:
    void makezero(vector<vector<int>> & mat,int row, int col){
        for(int j=0;j<mat[0].size();j++){
            mat[row][j]=0;
        }
        for(int i=0;i<mat.size();i++){
            mat[i][col]=0;
        } return;
    }


    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        bool row0 = false, col0 = false;

        // Step 1: Check if first row needs to be zeroed
        for(int j=0; j<n; j++){
            if(matrix[0][j] == 0) row0 = true;
        }

        // Step 2: Check if first column needs to be zeroed
        for(int i=0; i<m; i++){
            if(matrix[i][0] == 0) col0 = true;
        }

        // Step 3: Use first row & col as markers
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 4: Zero out cells based on markers
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 5: Zero out first row if needed
        if(row0){
            for(int j=0; j<n; j++) matrix[0][j] = 0;
        }

        // Step 6: Zero out first column if needed
        if(col0){
            for(int i=0; i<m; i++) matrix[i][0] = 0;
        }
        // int m=matrix.size();
        // int n=matrix[0].size();
        // vector<vector<int>> mat=matrix;
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         if(matrix[i][j]==0){
        //             makezero(mat,i,j);
        //         }
        //     }
        // }
        // matrix=mat;
    }
};