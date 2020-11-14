class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string convert[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> difSet;
        for (auto word : words) {
            string tmp;
            for (auto c : word) {
                tmp += convert[c-'a'];
            }
            difSet.insert(tmp);
        }
        return difSet.size();

    }
};
