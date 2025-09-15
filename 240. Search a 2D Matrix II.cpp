class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size(), c=matrix[0].size(), ri=0, ci=c-1;
        while(ri<r && ci>=0){
            int el=matrix[ri][ci];
            if(el==target){
                return 1;
            }
            if(el>target){
                ci--;
            }
            else if(el<target){
                ri++;
            }
        }
       return 0; 
    }
};