class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price = 0;
        int n = prices.size();
        for (int i = 0; i < n-1; ++i) {
            int tmp = prices[i+1]-prices[i];
            if (tmp > 0) {
                price += tmp;
            }
        }
        return price;
    }
};
