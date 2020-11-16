class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(arr == target)
            return true;
        unordered_map<int, int> tarMap;
        for (auto i : target) {
            ++tarMap[i];
        }
        for (auto i : arr) {
            if (tarMap[i] == 0)
                return false;
            else
                --tarMap[i];
        }
        for (auto i : tarMap) {
            if (i.second != 0)
                return false;
        }
        return true;
    }
};
