class Solution {
public:
    int findComplement(int num) {
        int tmp(0);
        for (int i = 0; num != 0; ++i) {
            tmp += !(num%2) * (pow(2,i));
            num = num >> 1;
        }
        return tmp;
    }
};
