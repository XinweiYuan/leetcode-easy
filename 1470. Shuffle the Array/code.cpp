class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> re;
        for (int i = 0; i < n; ++i) {
            re.push_back(nums[i]);
            re.push_back(nums[i+n]);
        }
        return re;
    }
};
