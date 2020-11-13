class Solution {
public:
    int sumOfDigits(vector<int>& A) {
        int minNum(A[0]);
        for (auto i : A) {
            minNum = (i < minNum) ? i : minNum;
        }
        int sum(0);
        while (minNum != 0) {
            sum += (minNum % 10);
            minNum /= 10;
        }
        return (sum % 2== 0) ? 1 : 0;
    }
};
