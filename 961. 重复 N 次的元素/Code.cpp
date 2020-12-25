class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        unordered_map<int, int> hm;
        int n(A.size()/2);
        for (auto i : A) {
            ++hm[i];
        }
        for (auto i : hm) {
            if (i.second == n)
                return i.first;
        }

        return 0;
    }
};
