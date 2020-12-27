class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minval(INT_MAX);
        int maxsum(0);
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i-1] < minval) {
                minval = prices[i-1];
            }
            if (prices[i] > minval) {
                maxsum = max(maxsum, prices[i] - minval);
            }
        }

        return maxsum;
    }
};
