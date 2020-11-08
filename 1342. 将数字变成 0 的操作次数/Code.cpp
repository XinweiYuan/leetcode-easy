class Solution {
public:
    int numberOfSteps (int num) {
        int rlt(0);
        while (num != 0) {
            num = (num % 2 == 0) ? num >> 1 : num - 1;
            ++rlt;
        }
        return rlt;
    }
};
