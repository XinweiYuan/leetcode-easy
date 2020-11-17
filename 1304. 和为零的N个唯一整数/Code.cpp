class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> rlt;
        if (n==1){
            rlt.push_back(0);
            return rlt;
        }
            
        if (n%2==0) {
            for(int i = 1; i <= n/2; ++i) {
                rlt.push_back(i);
                rlt.push_back(-i);
            }
        }else{
            rlt.push_back(0);
            for (int i = 1; i <= (n-1)/2; ++i){
                rlt.push_back(i);
                rlt.push_back(-i);
            }
        }
        return rlt;
    }
};
