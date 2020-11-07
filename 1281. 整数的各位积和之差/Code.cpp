class Solution {
public:
    int subtractProductAndSum(int n) {
        int times(1);
        int add(0);
        while (n != 0) {
            times *= n % 10;
            add += n % 10;
            n /= 10;
        }
        return times - add;
    }
};
