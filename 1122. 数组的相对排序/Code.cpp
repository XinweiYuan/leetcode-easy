class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(), arr1.end(), [&](int a, int b) {
            auto i1 = find(arr2.begin(), arr2.end(), a);
            auto i2 = find(arr2.begin(), arr2.end(), b);
            if (i1 != arr2.end() && i2 != arr2.end()) {
                if (i1 < i2)
                    return true;
                else
                    return false;
            }
            if(i1 == arr2.end() || i2 == arr2.end()){
                if (i1 == arr2.end() && i2 == arr2.end()){
                    if (a < b)
                        return true;
                    else
                        return false;
                }
                if (i1 < i2)
                    return true;
                else
                    return false;
            }
            return true;
        });
        return arr1;
    }
};
