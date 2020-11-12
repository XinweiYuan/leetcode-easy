class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> odd;
        vector<int> even;
        vector<int> rlt;
        for (auto i : A) {
            if (i % 2 == 0) 
                even.push_back(i);
            else
                odd.push_back(i);
        }
        for (int i = 0; i < odd.size(); ++i) {
            rlt.push_back(even[i]);
            rlt.push_back(odd[i]);
        }
        return rlt;
    }
};
