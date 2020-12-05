class Solution {
public:
    int titleToNumber(string s) {
        int rlt(0);
        unordered_map<char, int> hashmap;
        int n(s.size()-1);
        int j = 1;
        for (char i = 'A'; i <= 'Z'; ++i, ++j) {
            hashmap[i] = j;
        }
        for (auto c : s) {
            rlt += hashmap[c]*pow(26, n);
            --n;
        }
        return rlt;
    }
};
