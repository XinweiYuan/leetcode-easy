class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int m = arr[0];
        for (auto i : arr) {
            if (i > m)
                m = i;
        }
        return find(arr.begin(), arr.end(), m)-arr.begin();
    }
};
