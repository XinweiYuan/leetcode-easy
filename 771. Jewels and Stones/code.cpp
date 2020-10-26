class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int s[80] = {0};
        int re = 0;
        for(auto i : S) {
            ++s[i - 'A'];
        }
        for(auto i : J) {
            if(s[i - 'A'] > 0) {
                re += s[i - 'A'];
            }
        }
        return re;
    }
};
