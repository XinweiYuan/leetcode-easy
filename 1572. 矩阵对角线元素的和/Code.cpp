class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n(mat.size());
        int rlt(0);
        for (int i = 0, j = n-1; i < n; ++i, --j) {
            int a = mat[i][i];
            mat[i][i] = 0;
            int b = mat[i][j];
            mat[i][j] = 0;
            rlt += a+b;
        }
        return rlt;
    }
};
