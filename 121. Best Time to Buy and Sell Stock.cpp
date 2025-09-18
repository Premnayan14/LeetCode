class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for (int price : prices) {
            minPrice = min(minPrice, price); // track minimum price so far
            maxProfit = max(maxProfit, price - minPrice); // update max profit
        }
        return maxProfit;
    }
};