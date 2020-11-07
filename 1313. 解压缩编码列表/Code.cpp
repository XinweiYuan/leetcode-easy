class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> rlt;
        size_t n = nums.size();
        for (size_t i = 0; i+1 <= n; i=i+2) {
            while(nums[i] != 0) {
                rlt.push_back(nums[i+1]);
                --nums[i];
            }
        }
        return rlt;
    }
};
