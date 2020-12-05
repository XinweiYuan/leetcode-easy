class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int rlt(0);
        for (auto word : words) {
            bool flag(true);
            int n(word.size());
            unordered_map<char, int> tmp;
            for (auto i : chars) {
                ++tmp[i];
            }
            for (auto c : word) {
                if (tmp[c]>0) {
                    --tmp[c];
                }else {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                rlt += n;
            }
        }
        return rlt;
    }
};
