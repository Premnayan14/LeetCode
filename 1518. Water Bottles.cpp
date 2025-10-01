class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        // more optimized way
        return numBottles + (numBottles-1)/(numExchange-1);

        // less optimized way
        // int ans = numBottles;
        // int empty = numBottles;
        
        // while (empty >= numExchange) {
        //     int newBottles = empty / numExchange;
        //     ans += newBottles;
        //     empty = empty % numExchange + newBottles;
        // }
        // return ans;
    }
};