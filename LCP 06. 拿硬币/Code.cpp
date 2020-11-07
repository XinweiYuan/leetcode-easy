class Solution {
public:
    int minCount(vector<int>& coins) {
        int re(0);
        for (auto i : coins) {   
            if (i % 2 == 0) {
                re += i / 2;
            }else{
                re += (i / 2 + 1);
            }
        }
        return re;
    }
};
