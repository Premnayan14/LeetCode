class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
      /*  vector<double>dig(dimensions.size());
        for(int i=0;i<dimensions.size();i++){
            dig[i]=sqrt(dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1]);
        }
       int c=0; double max=0;
        for(int i=0;i<dig.size();i++){
            if(dig[i]>max){
                max=dig[i];
                c=i;
            }else if(dig[i]==max){
            int area1 = dimensions[i][0] * dimensions[i][1];
            int area2 = dimensions[c][0] * dimensions[c][1];
            if (area1 > area2) c = i;
            }
        }return dimensions[c][0]*dimensions[c][1];*/

    int index = 0;
    double maxDiag = 0;
    int maxArea = 0;

    for (int i = 0; i < dimensions.size(); i++) {
        double diag = sqrt(dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1]);
        int area = dimensions[i][0] * dimensions[i][1];

        if (diag > maxDiag || (diag == maxDiag && area > maxArea)) {
            maxDiag = diag;
            maxArea = area;
            index = i;
        }
    }

    return maxArea;

    }
};