class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int rlt(0);
        sort(nums.begin(), nums.end());
        for (size_t i = 0; i < nums.size()-1; i=i+2) {
            rlt += nums[i];
        }
        return rlt;
    }
};
