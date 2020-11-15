class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        if(k==0) {
            for(auto &i: code)
                i=0;
        }
        if(k>0){
            vector<int> tmp;
            for(auto i : code)
                tmp.push_back(i);
            for(auto i : code)
                tmp.push_back(i);
            for(int i=0; i < code.size();++i){
                int t(0);
                for(int j = 0; j < k; ++j){
                    t += tmp[i+1+j];
                }
                code[i] = t;
            }
        }
        if(k < 0){
            int n = code.size();
            vector<int> tmp;
            for(auto i : code)
                tmp.push_back(i);
            for(auto i : code)
                tmp.push_back(i);
            for(int i=0; i < code.size();++i){
                int t(0);
                for(int j = 0; j > k; --j){
                    t += tmp[i+n+j-1];
                }
                code[i] = t;
            }
        }

        return code;
    }
};
