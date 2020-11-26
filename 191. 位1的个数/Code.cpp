class Solution {
public:
    int hammingWeight(uint32_t n) {
        int rlt(0);
        while (n != 0) {
            if ((n & 1) == 1)
                ++rlt;
            n = n >> 1;
        }
        return rlt;
    }
};
