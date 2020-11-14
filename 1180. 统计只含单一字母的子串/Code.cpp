class Solution {
public:
    int countLetters(string S) {
        int rlt(0);
        int count(0);
        int i = 0;
        for (; i < S.size()-1; ++i) {          
            if (S[i+1] != S[i]) {
                count++;
                rlt += count*(count+1)/2;
                count = 0; 
                if (i+1 == S.size()-1)
                    ++rlt;
            }else{
                ++count;
                if (i+1 == S.size()-1) {
                    ++count;
                    rlt += count*(count+1)/2;
                }
            }
        }
        return rlt;
    }
};
