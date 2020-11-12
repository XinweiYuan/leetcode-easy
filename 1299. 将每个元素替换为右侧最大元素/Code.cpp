class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> t;
        vector<int> rlt;
        vector<int>::reverse_iterator reit;
        int tmp = *(arr.end()-1);
        for (reit = arr.rbegin(); reit != arr.rend()-1; ++reit) {
            rlt.insert(rlt.begin(), tmp);
            if (tmp < *(reit+1)) {
                tmp = *(reit+1);
            }
        }
       
        rlt.push_back(-1);
        return rlt;


    }
};
