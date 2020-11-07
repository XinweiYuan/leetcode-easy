class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        
        size_t n = nums.size();
        vector<int> rlt;
        for (size_t i = 0; i < n; ++i) {
            rlt.insert(rlt.begin()+index[i], nums[i]);
        }
        return rlt;
        

    }
};
