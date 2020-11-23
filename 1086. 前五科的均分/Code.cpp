class Solution {
public:
    vector<vector<int>> highFive(vector<vector<int>>& items) {
        vector<vector<int>> rlt;
        map<int, vector<int> > stu;
        for (auto i : items) {
            stu[i[0]].push_back(i[1]);
        }
        for (auto s : stu) {
            sort(s.second.begin(), s.second.end(),[&](int a, int b){
                return (a>b)?true:false;
            });
            int ave = (s.second[0]+s.second[1]+s.second[2]+s.second[3]+s.second[4])/5;
            rlt.push_back({s.first, ave});
        }
        return rlt;
    }
};
