class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<int> allnums;
        int N(0);
        for (auto i : nums) {
            for (auto j : i) 
                allnums.push_back(j);
        }
        N = allnums.size();
        if (r * c != N)
            return nums;
        vector<vector<int>> rtn;
        for (int i = 0;i < r; ++i) {
            vector<int> tmp;
            for (int j = 0; j < c; ++j) {
                tmp.push_back(allnums[c*i+j]);
            }
            rtn.push_back(tmp);
        }

        return rtn;
    }
};
