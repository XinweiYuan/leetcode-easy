class Solution {
public:
    int findLucky(vector<int>& arr) {
        int rtn(-1);
        unordered_map<int, int> hm;
        for (auto i : arr) {
            ++hm[i];
        }
        for (auto i : hm) {
            if (i.first == i.second) {
                rtn = max(rtn, i.first);
            }
        }
        return rtn;
    }
};
