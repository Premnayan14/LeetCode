class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
                    //  Binary search
        // int r=matrix.size(); int c=matrix[0].size(); int el=r*c;
        // int s=0, end=el-1, mid=s+(end-s)/2;
        // while(s<=end){
        //     int  ind=matrix[mid/c][mid%c];
        //     if(target==ind){
        //         return 1;
        //     }
        //     if(target>ind){
        //         s=mid+1;
        //     }
        //     else{
        //         end=mid-1;
        //     }
        //     mid=s+(end-s)/2;
        // }
        // return 0;

                    //  Staircase Search
        int r=matrix.size(),c=matrix[0].size();
        int i=0,j=c-1;  //start from top-right corner
        while(i<r && j>=0){
           int a=matrix[i][j];
            if(a==target){ //found
                return 1;   
            }
            else if(target>a ){
                i++;  //move down
            }
            else{
                j--;    //move left
            } 
        }return 0;
    }
};