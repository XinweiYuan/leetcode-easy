class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int N(cost.size());
        if (N == 0)
            return 0;
        if (N == 1 || N == 2)
            return cost[0];

        vector<int> dp(cost);
        //dp[1] = dp[0];
        for (int i = 2; i < N; ++i) {
            dp[i] = min(dp[i-1] + cost[i], cost[i] + dp[i-2]);
            //dp[i] += cost[i];
        }
        return min(dp[N-1], dp[N-2]);
    }
};
