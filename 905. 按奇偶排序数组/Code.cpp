class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        int i = 0, j = A.size()-1;
        while (i < j) {
            for (;j > i;--j) {
                if (A[j]%2==0)
                    break;
            }
            for (;i < j;++i) {
                if (A[i]%2!=0)
                    break;
            }
            int tmp;
            tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
        return A;
    }
};
