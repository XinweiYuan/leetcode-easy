class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> map1;
        for (auto i : nums) {
            ++map1[i];
        }
        sort(nums.begin(), nums.end(), [&](int a, int b){
            if (map1[a] < map1[b]) {
                return true;
            }else if (map1[a] == map1[b]) {
                return (a>b)?true:false;
            }
            return false;
        });
        return nums;
    }
};
