class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //My Solution
        // unordered_map<int, int> tmp;
        // for (auto i : nums) {
        //     ++tmp[i];
        // }
        // for (auto i : tmp) {
        //     if (i.second == 1)
        //         return i.first;
        // }
        // return 0;
        
        //Offical Solution
        for (size_t i = 1; i < nums.size(); ++i) {
            nums[0] = (nums[0] ^ nums[i]);
        }
        return nums[0];
    }
};
