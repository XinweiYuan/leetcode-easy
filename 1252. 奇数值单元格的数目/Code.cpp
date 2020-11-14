class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        map<int, int> seq;
        int i = n*m-1;
        while (i >= 0){
            seq[i] = 0;
            --i;
        }
  
        for (auto i : indices) {
            for (int j = 0; j < m; ++j) {
                seq[m*i[0]+j]++;
            }
            for (int k = 0; k < n; ++k) {
                seq[k*m + i[1]]++;
            }
        }
        int rlt(0);
        for (auto i : seq){
            if(i.second % 2 == 1)
                rlt++;
        }
        return rlt;

    }
};
