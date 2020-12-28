# 本题需要计算方块的三视图面积之和
# 1. 上视图的面积等于 grid 中不为 0 的元素个数
# 2. 前视图的面积等于 grid 每列的最大值之和
# 3. 侧视图的面积等于 grid 每行的最大值之和

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
