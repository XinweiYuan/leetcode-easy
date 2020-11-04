class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        vector<int> re;
        for (auto i : A) {
            for (size_t j = 0; j < B.size(); ++j) {
                if (i == B[j]) {
                    re.push_back(j);
                    break;
                }
            }
        }
        return re;
    }
};
