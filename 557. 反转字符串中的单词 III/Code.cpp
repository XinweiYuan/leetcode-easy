class Solution {
public:
    string reverseWords(string s) {
        string tmp;
        int countSpace(0);
        vector<string> words;
        for (int i = s.size()-1; i >= 0; --i) {
            if (s[i] != ' ') {
                tmp += s[i];
            }else {
                ++countSpace;
                words.push_back(tmp);
                tmp = "";
            }
        }
        words.push_back(tmp);
        for (int i=0, j=words.size()-1; i < j; ++i, --j) {
            string t = words[i];
            words[i] = words[j];
            words[j] = t;
        }
        string rlt;
        for (auto i : words) {
            rlt += i;
            if (countSpace != 0) {
                rlt += ' ';
                --countSpace;
            }
        }
        return rlt;
        
    }
};
