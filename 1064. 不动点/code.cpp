class Solution {
public:
    int fixedPoint(vector<int>& A) {
        int rtn(-1);
        int n(A.size());
        for (int i = 0; i < n; ++i) {
            if (i == A[i]) {
                rtn = i;
                break;
            }
        }
        return rtn;
    }
};
