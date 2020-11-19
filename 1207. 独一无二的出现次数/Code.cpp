class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> map1;
        unordered_map<int, int> map2;
        for (auto i : arr) {
            map1[i]++;
        }
        for (auto i : map1) {
            map2[i.second]++;
        }
        for (auto i : map2) {
            if (i.second != 1)
                return false;
        }
        return true;
    }
};
