
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int rlt(0);
        for (auto i : arr1) {
            auto iter = find_if( arr2.begin(), arr2.end(), [&](int a){
                return (abs(a-i)<=d);
            });
            if (iter == arr2.end()) {
                ++rlt;
            }
        }
        return rlt;
    }
};
