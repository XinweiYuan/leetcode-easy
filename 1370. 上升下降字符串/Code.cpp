class Solution {
public:
    string sortString(string s) {
        string rlt;
        vector<char> tmp;
        char cmpc1('A');
        char cmpc2('{');
        for (auto i : s) 
            tmp.push_back(i);
        sort(tmp.begin(), tmp.end());
        int count = 0;
        while(count != n) {
            cmpc2='{';
            for (int i = 0; i < tmp.size(); ++i) {
                if(tmp[i] > cmpc1){
                    rlt += tmp[i];
                    cmpc1 = tmp[i];
                    ++count;
                    tmp.erase(tmp.begin()+i);
                    --i;
                }
            }
            for (int i = tmp.size()-1; i >=0; --i) {
                if(tmp[i] < cmpc2){
                    rlt += tmp[i];
                    cmpc2 = tmp[i];
                    ++count;
                    tmp.erase(tmp.begin()+i);
                    //++i;
                }
            }
            cmpc1='A';
        }
        return rlt;
        

    }
};
