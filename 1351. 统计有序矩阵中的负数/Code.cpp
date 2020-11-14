class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n(grid.size() * grid[0].size());
        int countPos(0);
        for (auto i : grid) {
            for (auto j : i) {
                if (j >= 0)
                    ++countPos;
                else
                    break; 

            }
        }
        return n - countPos;
    }
};
