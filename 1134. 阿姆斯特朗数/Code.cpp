class Solution {
public:
    bool isArmstrong(int N) {
        int N1(N), N2(N);
        int i(0);
        int tmp(0);
        while(N != 0) {
            ++i;
            N /= 10;
        }
        while (N1 != 0) {
            tmp += pow(N1%10, i);
            N1 /= 10;
        }

        return (tmp == N2) ? true : false;

    }
};
