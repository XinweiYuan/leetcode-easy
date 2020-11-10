class Solution {
public:
    int balancedStringSplit(string s) {
        int rlt(0);
        int sum(0);
        int cr(0);
        int cl(0);
        for (auto i : s) {
            if (i == 'R')
                ++cr;
            else
                ++cl;
            sum += i-'A';
            if (sum%28 == 0&&cr==cl){

                ++rlt;
                sum = 0;
            }
        }
        return rlt;
    }
};
