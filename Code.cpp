class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> rlt;
        int seq[101] = {0};
    
        for (auto i : nums) {
            ++seq[i];
        }
        int tmp = 0;
        for (int j = 0; j < 101; ++j) {
            if (seq[j] != 0){
                tmp += seq[j];
                seq[j] = tmp - seq[j];
            }
            
        }
        for (auto i : nums){
            rlt.push_back(seq[i]);
        }
        return rlt;

    }
};
