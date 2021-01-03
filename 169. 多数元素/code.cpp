class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt(nums.size() / 2);
        int rtn(0);
        unordered_map<int, int> hm;
        for (auto i : nums)
            hm[i]++;
        for (auto& [num, value]: hm) {
            if (value > cnt)
                rtn = num;
        }
        return rtn;
    }
};
