class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> rlt;
        vector<vector<char>> keyBoard = {{'q','w','e','r','t','y','u','i','o','p'},
        {'a','s','d','f','g','h','j','k','l'}, {'z','x','c','v','b','n','m'}};
        for (auto word : words) {
            int a1 = 0;
            int a2 = 0;
            int a3 = 0;
            int n = word.size();
            for (auto ch : word) {
                if (find(keyBoard[0].begin(), keyBoard[0].end(), tolower(ch))!=keyBoard[0].end()) {
                    ++a1;
                }
                if (find(keyBoard[1].begin(), keyBoard[1].end(), tolower(ch))!=keyBoard[1].end()) {
                    ++a2;
                }
                if (find(keyBoard[2].begin(), keyBoard[2].end(), tolower(ch))!=keyBoard[2].end()) {
                    ++a3;
                }
            }
            if (a1 == n || a2 == n || a3 == n)
                rlt.push_back(word);
        }
        return rlt;
    }
    
};
