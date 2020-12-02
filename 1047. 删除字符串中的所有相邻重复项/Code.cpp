class Solution {
public:
    string removeDuplicates(string S) {
        string rlt;
        stack<char> chrStk;
       // chrStk.push(S[0]);
        for (auto c : S) {
            if (chrStk.size() == 0) {
                chrStk.push(c);
            }else{
                if (c == chrStk.top()) {
                    chrStk.pop();
                }else{
                    chrStk.push(c);
                }
            }
        }
        if (chrStk.size() == 0)
            return "";
        while (chrStk.size() != 0) {
            rlt.insert(rlt.begin(), chrStk.top());
           // rlt += chrStk.top();
            chrStk.pop();
        }
        return rlt;
    }
};
