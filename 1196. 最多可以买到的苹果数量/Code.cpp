class Solution {
public:
    int maxNumberOfApples(vector<int>& arr) {
        int sum(0);
        int rlt(0);
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); ++i) {
            sum += arr[i];
            if (sum <= 5000)
                ++rlt;
            else
                break;
        }
        return rlt;
    }
};
