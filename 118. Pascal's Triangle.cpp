class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        // vector<vector<int>> res;
        // res.reserve(numRows);

        // for (int i = 0; i < numRows; ++i) {
        //      vector<int> row(i + 1, 1);
        //      long long val = 1;     // use long long to avoid mid-step overflow
        //      for (int j = 1; j < i; ++j) {
        //      val = val * (i - j + 1) / j;   // C(i, j) from C(i, j-1)
        //      row[j] = (int)val;     }
        //      res.push_back(move(row));
        //     }return res;


        vector<vector<int>> res;  
        res.reserve(numRows);

        for (int i = 0; i < numRows; ++i) {
            res.push_back(vector<int>(i + 1, 1));      // fill with 1s
            for (int j = 1; j < i; ++j) {               // skip ends
                res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
            }
        }
        return res;
    }
};