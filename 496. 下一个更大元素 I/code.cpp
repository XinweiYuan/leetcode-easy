class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> rtn;
        for (auto i : nums1) {
            auto iter = find(nums2.begin(), nums2.end(), i);
            ++iter;
            int t(-1);
            while (iter < nums2.end()) {
                if (*iter > i) {
                    t = *iter;
                    break;
                }
                ++iter;
            }
            rtn.push_back(t);
        }
        return rtn;
    }
};
