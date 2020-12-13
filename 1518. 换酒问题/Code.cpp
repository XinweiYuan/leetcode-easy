class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int rlt(numBottles);
        while (numBottles >= numExchange) {
            rlt += numBottles / numExchange;
            numBottles = numBottles / numExchange + numBottles % numExchange;
        }
        return rlt;
    }
};
