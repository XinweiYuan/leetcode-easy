class Solution {
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3) {
        vector<int> rlt;
        map<int, int> tmp;
        for (auto i : arr1) {
            tmp[i]++;
        }
        for (auto i : arr2) {
            tmp[i]++;
        }
        for (auto i : arr3) {
            tmp[i]++;
        }
        for(auto i : tmp) {
            if(i.second == 3) {
                rlt.push_back(i.first);
            }
        }

        return rlt;

    }
};
