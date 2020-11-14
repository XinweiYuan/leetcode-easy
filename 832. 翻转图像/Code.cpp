class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> rlt;
        for (auto i : A) {
            vector<int> tmp;
            for (auto ri = i.rbegin(); ri != i.rend(); ++ri) {
                tmp.push_back(1^(*ri));
            }
            rlt.push_back(tmp);
        }
        return rlt;
    }
};
