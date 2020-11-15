class Solution {
public:
    int maximum69Number (int num) {
        string numStr = to_string(num);
        int rlt(0);
        int n = numStr.size();
        bool flag = true;
        for (auto &i : numStr) {
            if (i == '6' && flag){
                i = '9';
                flag = false;;
            }
            rlt += (i-'0')*pow(10, n-1);
            --n;
        }
       return rlt;
    }
};
