class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {

        int row=0,col=0;
        int m=mat.size(),n=mat[0].size(),d=1;
        vector<int> ans(m*n);
        for(int i=0;i<m*n;i++){
            ans[i]=mat[row][col];
            if(d==1){ //red line
                if(col==n-1){row++;d=-1;}
                else if(row==0){col++;d=-1;}
                else{row--;col++;}
            }
            else{ // yellow line
                if(row==m-1){col++;d=1;}
                else if(col==0){row++;d=1;}
                else{row++;col--;}
            }
        }return ans;

        // if (mat.empty() || mat[0].empty()) return {};

        // int m = mat.size(), n = mat[0].size();
        // vector<int> result(m * n);
        // int row = 0, col = 0;

        // for (int i = 0; i < m * n; i++) {
        //     result[i] = mat[row][col];

        //     if ((row + col) % 2 == 0) {
        //         if (col == n - 1) row++;
        //         else if (row == 0) col++;
        //         else { row--; col++; }
        //     } else {
        //         if (row == m - 1) col++;
        //         else if (col == 0) row++;
        //         else { row++; col--; }
        //     }
        // }return result;
    }
};