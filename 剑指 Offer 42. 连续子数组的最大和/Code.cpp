class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int N = nums.size();
        if (N == 0)
            return 0;
        if (N == 1)
            return nums[0];

        int maxsum(INT_MIN);
        int dp_i = 0;
        for (int i = 0; i < N; ++i) {
            dp_i = max(dp_i + nums[i], nums[i]);
            maxsum = max(maxsum, dp_i);
        }
        return maxsum;
    }
};
