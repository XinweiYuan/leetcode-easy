class Solution {
public:
    int countElements(vector<int>& arr) {
        int rlt(0);
        for (auto num : arr) {
            if (find(arr.begin(), arr.end(), num+1) != arr.end()) {
                ++rlt;
            }
        }
        return rlt;
    }
};
