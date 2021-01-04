class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> rtn;
        vector<vector<int>> info(mat.size(),vector<int>(2));
        int j(0);
        for (auto line : mat) {
            int cntM(0);
            for (auto i : line) {
                if (i == 1)
                    ++cntM;
            }
            info[j][0] = j;
            info[j][1] = cntM;
            ++j;
        }
        sort(info.begin(), info.end(), [&](vector<int>a, vector<int>b){
            if (a[1] < b[1])
                return true;
            else if (a[1] == b[1])
                if (a[0] < b[0])
                    return true;
                else
                    return false;
            else
                return false;
        });
        for (int i = 1; i <= k; ++i) {
            rtn.push_back(info[i-1][0]);
        }
        return rtn;
    }
};
