class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        for (auto &i : A) {
            i *= i;
        }
        sort(A.begin(), A.end());
        return A;
    }
};
