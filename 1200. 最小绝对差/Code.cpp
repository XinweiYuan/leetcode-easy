class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int t = arr[1] - arr[0];
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] - arr[i-1] < t)
                t = arr[i] - arr[i-1];
        }
        vector<vector<int>> rlt;
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] - arr[i-1] == t) {
                rlt.push_back({arr[i-1], arr[i]});
            }
        }
        return rlt;
    }
};
