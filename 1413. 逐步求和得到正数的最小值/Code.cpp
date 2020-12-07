class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int tmp(0);
        int minSum(nums[0]);
        int i = 0;
        for (; i < nums.size(); ++i) {
            tmp += nums[i];
            if (tmp < minSum) 
                minSum = tmp;
        }
        return (minSum < 0) ? (1-minSum) : 1;
    }
};
