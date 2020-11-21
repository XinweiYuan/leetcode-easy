class Solution {
public:
    double trimMean(vector<int>& arr) {
        double rlt(0.0);
        int n(0);
        sort(arr.begin(), arr.end());
        int t1 = arr.size() * 0.05;
        int t2 = arr.size() * 0.95;
        for (int i = t1; i < t2; ++i) {
            rlt += arr[i];
            ++n;
        }
        return rlt/n;
    }
};
