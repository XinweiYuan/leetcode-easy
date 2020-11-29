class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(), A.end(), [&](int a, int b){
            return (a > b) ? true : false;
        });
        for (size_t i = 0; i < A.size()-2; ++i) {
            if (A[i]+A[i+1]>A[i+2]&&A[i+1]+A[i+2]>A[i]&&A[i]+A[i+2]>A[i+1]) {
                return (A[i]+A[i+1]+A[i+2]);
            }
        }
        return 0;
    }
};
