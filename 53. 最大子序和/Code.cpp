class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
        dp[0] = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            dp[i] = nums[i] + max(dp[i-1], 0);
        }
        int rlt(dp[0]);
        for (auto i : dp) {
            if (i > rlt)
                rlt = i;
        }
        return rlt;
    }
};
