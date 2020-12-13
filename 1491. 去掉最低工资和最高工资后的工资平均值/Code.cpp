class Solution {
public:
    double average(vector<int>& salary) {
        int count(0);
        double rlt(.0);
        int min(salary[0]);
        int max(salary[0]);
        for (auto i : salary) {
            if (i < min)
                min = i;
            if (i > max)
                max = i;
        }
        for (auto i : salary) {
            if (i != min && i != max) {
                rlt += i;
                ++count;
            }
        }
        return rlt / count;
    }
};
