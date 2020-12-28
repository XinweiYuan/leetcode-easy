class Solution {
public:

    int projectionArea(vector<vector<int>>& grid) {
        int rnt(0);

        for (auto i : grid)
            for (auto j : i)
                rnt += (j == 0) ? 0 : 1;

        for (auto i : grid) {
            rnt += *max_element(i.begin(), i.end());
        }

        for (int i = 0; i < grid[0].size(); ++i) {
            int tmp(0);
            for (int j = 0; j < grid.size(); ++j) {
                tmp = max(tmp, grid[j][i]);
            }
            rnt+=tmp;
        }
        return rnt;

    }
};
