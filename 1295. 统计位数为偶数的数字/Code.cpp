class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int rlt(0);
        for(auto i : nums) {
            int tmp(0);
            while (i != 0){
                ++tmp;
                i = i / 10;
            }
            if (tmp % 2 == 0)
                ++rlt;
        }
        return rlt;
    }
};
