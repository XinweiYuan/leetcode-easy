class Solution {
public:
    string freqAlphabets(string s) {
        string rlt;
        int i = 0;
        string num1;
        for(; i < s.size(); ++i) {
            if (i < s.size()-2) {
                if (s[i+2] != '#' && s[i+1] != '#' && s[i] != '#') {
                rlt += 'a' + (s[i]-'1');
                }
                if (s[i+2] == '#'){
                num1 += s[i];
                }
            }else{
                if (s[i+1] != '#' && s[i] != '#') {
                rlt += 'a' + (s[i]-'1');
                }
            }
            if (s[i+1] == '#'){
                num1 += s[i];
            }
            if (s[i]=='#') {
                rlt += 'a' + (stoi(num1)-1);
                num1 = "";
            }
        }
        return rlt;
    }
};
