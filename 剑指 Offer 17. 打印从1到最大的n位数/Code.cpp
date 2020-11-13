class Solution {
public:
    vector<int> printNumbers(int n) {
        vector<int> rlt;
        int range = pow(10, n);
        for (int i = 1; i < range; ++i)
            rlt.push_back(i);
        return rlt;
    }
};
