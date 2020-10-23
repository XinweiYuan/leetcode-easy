class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> re;
        int maxCandy = candies[0];
        for (auto i : candies) {
            if (i > maxCandy) {
                maxCandy = i;
            }
        }
        for (auto i : candies) {
            if (i + extraCandies >= maxCandy) {
                re.push_back(true);
            }else {
                re.push_back(false);
            }
        }
        return re;

    }
};
