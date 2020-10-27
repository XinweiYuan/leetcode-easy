class Solution {
public:
    int xorOperation(int n, int start) {
        int re = start;
    
        for (int i = 1; i < n; ++i) {
            re = re ^ (start + 2 * i);
        }
        
        return  re;
    }
};
