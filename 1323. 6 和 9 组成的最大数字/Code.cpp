class Solution {
public:
    int maximum69Number (int num) {
        string numStr = to_string(num);
        for (auto &i : numStr) {
            if (i == '6'){
                i = '9';
                break;
            }
        }
       return stoi(numStr);
    }
};
