class Solution {
public:
    int hammingDistance(int x, int y) {
        int rlt(0);
        int tmp = x ^ y;
        //布莱恩·克尼根算法
        while (tmp != 0){
            ++rlt;
            tmp = tmp & (tmp-1);
        }
        //移位算法
        // while (tmp != 0) {
        //     rlt += tmp % 2;
        //     tmp = tmp >> 1;
        // }
        return rlt;
       
    }
};
