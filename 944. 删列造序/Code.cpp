class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int rlt(0);
        int nStr = A[0].size();
        if (A.size() == 1)
            return 0;
        for (int i = 0; i < nStr; ++i) {
            for (int j = 1; j < A.size(); ++j) {
                if (A[j][i] - A[j-1][i] < 0) {
                    ++rlt;
                    break;
                }
            }
        }
        return rlt;
    }
};
