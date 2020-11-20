class Solution {
public:
    string generateTheString(int n) {
        string rlt;
        if (n % 2 == 1) { //odd
            while (n != 0) {
                rlt += 'a';
                --n;
            }
        }else {
            rlt += 'a';
            while (n != 1) {
                rlt += 'b';
                --n;
            }
        }
        return rlt;
    }
};
