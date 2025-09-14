class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
      vector<int>ans;
      int row=matrix.size(), col=matrix[0].size(), count=0;
      int sr=0, ec=col-1, er=row-1, sc=0, total =col*row;
      while(count<total){
        //printing starting row
        for(int i=sc; count<total && i<=ec ;i++){
            ans.push_back(matrix[sr][i]);count++;
        }sr++;
        //printing ending column
        for(int i=sr;count<total && i<=er; i++){
            ans.push_back(matrix[i][ec]); count++;
        }ec--;
        //printing ending row
        for(int i=ec; count<total && i>=sc;i--){
            ans.push_back(matrix[er][i]); count++;
        }er--;
        //printing starting column
        for(int i=er;count<total && i>=sr;i--){
            ans.push_back(matrix[i][sc]); count++;
        }sc++;
      } return ans;
    }
};