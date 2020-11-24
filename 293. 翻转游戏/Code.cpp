class Solution {
public:
    vector<string> generatePossibleNextMoves(string s) {
        vector<string> rlt;
        vector<int> pos;
        if (s == "")
            return rlt;
        for (size_t i = 0; i < s.size()-1; ++i) {
            if (s[i]=='+' && s[i+1] == '+')
                pos.push_back(i);
        }
        if (pos.size() == 0)
            return rlt;
        for (auto i : pos) {
            string tmp(s);
            tmp[i] = '-';
            tmp[i+1] = '-';
            rlt.push_back(tmp);
        }
        return rlt;
    }
};
