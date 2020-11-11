class Solution {
public:
    // string rlt;
    // void helper(string str) {
    //     if (str == "")
    //         return;
    //     int tmp = 0;
    //     string tmpStr;
    //     int i = 0;
    //     for (i = 0; i < str.size(); ++i) {
    //         if (str[i] == '(') {
    //             ++tmp;
    //             if (i != 0)
    //                 tmpStr += str[i];
    //         }else {
    //             --tmp;
    //             if (tmp != 0)
    //                 tmpStr += str[i];
    //         }
    //         if (tmp == 0){
    //             rlt += tmpStr;
    //             break;
    //         }  
    //     }
    //     helper(str.substr(i+1));

    // }
    string removeOuterParentheses(string S) {
        // helper(S);
        string rlt;
        int tmp = 0;
        bool flag = false;
        for (auto i : S) {
            if (i == '(') {
                tmp++;
                if (flag) {
                    rlt += i;
                }
                flag = true;
            }else{
                tmp--;
                if (tmp == 0) {
                    flag = false;
                    tmp=0;
                }
                if (flag) {
                    rlt += i;
                }
            }
        }
        return rlt;
    }
};
