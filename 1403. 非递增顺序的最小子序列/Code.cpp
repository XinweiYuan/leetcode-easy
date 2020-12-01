class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> rlt;
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            return (a>b)?true:false;
        });

        int sum1(0), sum2(0);
        for (auto i : nums) {
            sum2 += i;
        }
        for (auto i : nums) {
            rlt.push_back(i);
            sum1 += i;
            sum2 -= i;
            if (sum1 > sum2)
                break;
        }
        return rlt;
    }
};
