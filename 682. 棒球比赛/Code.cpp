class Solution {
public:
    int calPoints(vector<string>& ops) {
        int rlt(0);
        vector<int> scores;
        for (auto i : ops) {
            if (i != "C" && i != "D" && i != "+") {
                scores.push_back(stoi(i));
            }
            if (i == "C") {
                scores.erase(scores.end()-1);
            }
            if (i == "D") {
                scores.push_back(*(scores.end()-1) * 2);
            }
            if (i == "+") {
                scores.push_back(*(scores.end()-1) + *(scores.end()-2));
            }
        }
        for (auto i : scores) {
            rlt += i;
        }
        return rlt;

    }
};
