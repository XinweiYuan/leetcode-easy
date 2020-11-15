class Solution {
public:
    bool ifSelfDiv(int num){
        int tmp(num);
        bool re(true);
        while (num != 0) {
            int a = num % 10;
            if (a == 0) {
                re = false;
                break;
            }else {
                if(tmp%a!=0) {
                    re = false;
                    break;
                }
            }
            num /= 10;
        }
        return re;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> rlt;
        for (int i = left; i <= right; ++i) {
            if (ifSelfDiv(i))
                rlt.push_back(i);
        }
        return rlt;
    }
};
