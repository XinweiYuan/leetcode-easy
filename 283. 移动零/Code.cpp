class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count(1);
        for (auto iter = nums.begin(); count != nums.size(); ++iter, ++count) {
            if (*iter == 0) {
                nums.erase(iter);
                --iter;
                nums.push_back(0);
            }
        }
    }
};
