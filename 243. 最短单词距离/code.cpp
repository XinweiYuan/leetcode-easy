class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {
        vector<int> w1;
        vector<int> w2;
        for (int i = 0; i < words.size(); ++i) {
            if (word1 == words[i])
                w1.push_back(i);
            if (word2 == words[i])
                w2.push_back(i);
        }
        int rtn(INT_MAX);
        for (auto i : w1) {
            for (auto j : w2) {
                rtn = min(abs(i - j), rtn);
            }
        }
        return rtn;
    }
};
