class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> rlt;
        int N(A.size());
        int M(A[0].size());

        for (int i = 0; i < M; ++i) {
            vector<int> line;
            for (int j = 0 ; j < N; ++j) {
                line.push_back(A[j][i]);
            }
            rlt.push_back(line);
        }

        return rlt;
    }
};
